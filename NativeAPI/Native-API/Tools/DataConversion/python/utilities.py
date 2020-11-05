"""
Utility methods
Data Bus Message file parsing (Python)

Copyright Metamoto Inc, 2018
"""

import struct
from math import *

from metamoto.messages import data_bus_message_pb2

HEADER_SIZE = 19  # 19-character header marker "MetamotoMessageFile"

def read_data_bus_message_file(filename):
  with open(filename, "rb") as file:
    file_content = file.read()
    file_position = 0

    header, file_position = get_string(file_content, file_position, HEADER_SIZE)
    version, file_position = get_int32(file_content, file_position)

    total_records = 0
    messages = []
    while file_position < len(file_content):
      total_records += 1

      data_size, file_position = get_int32(file_content, file_position)
      message, file_position = get_data_bus_message(file_content, file_position, data_size)
      messages.append(message)

    return messages
        
def get_string(file_content, start, size):
  end = start + size
  parts = struct.unpack("c" * size, file_content[start : end])
  string = ""
  for i in range(size):
    string = string + parts[i].decode()
  return string, end

def get_int32(file_content, start):
  end = start + 4
  parts = struct.unpack("I", file_content[start : end])
  return parts[0], end

def get_float(file_content, start):
  end = start + 4
  parts = struct.unpack("f", file_content[start : end])
  return parts[0], end

def get_data_bus_message(file_content, start, size):
  end = start + size
  m = data_bus_message_pb2.DataBusMessage()
  m.ParseFromString(file_content[start : end])
  return m, end

# Quaternions are defined as (x, y, z, w)
def quaternion_multiply(q1, q2):
  x1, y1, z1, w1 = q1
  x2, y2, z2, w2 = q2 
  w = w1 * w2 - x1 * x2 - y1 * y2 - z1 * z2
  x = w1 * x2 + x1 * w2 + y1 * z2 - z1 * y2
  y = w1 * y2 + y1 * w2 + z1 * x2 - x1 * z2
  z = w1 * z2 + z1 * w2 + x1 * y2 - y1 * x2
  return x, y, z, w

def quaternion_conjugate(q):
  x, y, z, w = q
  return (-x, -y, -z, w)

# Quaternion vector multiplication
def quaternion_vector_multiply(q1, v1):
  q2 = v1 + (0.0,)
  return quaternion_multiply(quaternion_multiply(q1, q2), quaternion_conjugate(q1))[0:3]

def axis_angle_to_quaternion(v, theta):
  v = norm(v)
  x, y, z = v
  theta /= 2
  w = cos(theta)
  x = x * sin(theta)
  y = y * sin(theta)
  z = z * sin(theta)
  return x, y, z, w

def quaternion_to_axis_angle(q):
  v = q[0:3]
  w = q[3]
  theta = acos(w) * 2.0
  return norm(v), theta

def norm(v, tolerance=0.00001):
  mag2 = sum(n * n for n in v)
  if abs(mag2 - 1.0) > tolerance:
      mag = sqrt(mag2)
      v = tuple(n / mag for n in v)
  return v
