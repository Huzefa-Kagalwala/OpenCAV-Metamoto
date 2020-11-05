# Metamoto, Inc., 2018
# System Under Test (SUT) Example
# TensorFlow/Python Vehicle Detector
#
# Process class
# ==============================================================================

from timeit import default_timer as timer
import numpy as np
from PIL import Image, ImageDraw
import tensorflow as tf
import graphs.label_map_util as label_map_util
import os


class Processor:
  """
  A class to process and label input images with bounding boxes arou detected objects. 
  Output image is saved to a folder in the results_directory

  Members:
    category_index (dcit): a dict mapping int keys to human readable object names
    graph (Graph): stores the loaded tensorflow dataflow graph representing computations
    sess (Session): represents a client connection to the tensorflow c++ runtime 
    directory (string): directory to save images to
    step (int): counter for number of frames processed 
    graph_name (str): optional name of graph to load (from graphs directory, leave out file extension)
  """

  # static constants
  CRASH_ZONE_START = 180
  CRASH_ZONE_END = 540
  MIN_SCORE = 0.55
  IMAGE_LENGTH = 720
  HALF_LENGTH = 360
  RESIZE_LENGTH = 300

  def __init__(self, directory, graph_name='mobilenet_lite'):
    self.category_index = None
    self.graph = None
    self.sess = None
    self.results_directory = directory
    self.step = 0
    self.graph_name = graph_name

  def get_labels(self):
    """ Get dictionary of detection categories to object names """ 
    directory = os.path.dirname(os.path.abspath(__file__))
    label_map = label_map_util.load_labelmap(directory + '/graphs/mscoco_label_map.pbtxt')
    categories = label_map_util.convert_label_map_to_categories(label_map, max_num_classes=100, use_display_name=True)
    self.category_index = label_map_util.create_category_index(categories)

  def load_frozen_graph(self):
    self.get_labels()

    # load protobuf from disk
    directory = os.path.dirname(os.path.abspath(__file__))
    filename = directory + '/graphs/' + self.graph_name + '.pb'
    with tf.gfile.GFile(filename, "rb") as f:
      graph_def = tf.GraphDef()
      graph_def.ParseFromString(f.read())

    # import graph_def into a new graph
    with tf.Graph().as_default() as _graph:
      _ = tf.import_graph_def(graph_def, name='')
      self.graph = _graph

    self.sess = tf.Session(graph=self.graph)

  def label_image(self, frame, width, height):
    """
    Pass image through tensor graph to gather locations and confidence of detected objects.

    Only objects with a high enough detection score are tracked. The rest are ignored.
    process_image() determines if frame is not empty then orients image before passing it
    to classify_image.
    """

    # if frame is not empty, classify objects in image
    # label and draw bounding boxes around them, then save image frame to results directory
    if width + height > 0:
      im = Image.frombytes('RGB', (width, height), frame)
      im = im.transpose(Image.FLIP_TOP_BOTTOM)
      image_label_pair = self.classify_image(im)
      image_label_pair['image'].save(self.results_directory + '/images/' + str(self.step) + '.png')
      self.step += 1
      return image_label_pair['labels']

  def classify_image(self, image):
    """ Called by process_image() """

    # crop and convert pillow image to np array
    hw = image.width / 2
    hh = image.height / 2
    image = image.crop((hw - self.HALF_LENGTH, hh - self.HALF_LENGTH, hw + self.HALF_LENGTH, hh + self.HALF_LENGTH))
    resized_image = image.resize((self.RESIZE_LENGTH, self.RESIZE_LENGTH))
    im = np.array(resized_image.getdata())
    im = im.reshape((1, resized_image.width, resized_image.height, 3)).astype(np.uint8)

    x = self.graph.get_tensor_by_name('num_detections:0')
    y = self.graph.get_tensor_by_name('detection_scores:0')
    z = self.graph.get_tensor_by_name('detection_boxes:0')
    w = self.graph.get_tensor_by_name('detection_classes:0')
    img_tensor = self.graph.get_tensor_by_name('image_tensor:0')

    start = timer()
    out = self.sess.run([x, y, z, w], feed_dict={img_tensor: im})

    # visualize bounding boxes
    num_detections = int(out[0][0])
    detections = list()
    for i in range(num_detections):
      class_id = int(out[3][0][i])
      score = float(out[1][0][i])
      bbox = [float(v) for v in out[2][0][i]]

      # only consider objects with a good score
      if score > self.MIN_SCORE:
        left = bbox[1] * self.IMAGE_LENGTH
        top = bbox[0] * self.IMAGE_LENGTH
        right = bbox[3] * self.IMAGE_LENGTH
        bottom = bbox[2] * self.IMAGE_LENGTH
        detections.append([self.category_index[class_id]['name'], left, top, right, bottom, score])

    draw = ImageDraw.Draw(image)
    size = 0
    big_box = None

    # draw bounding box w/ label around all detected objects
    for box in detections:
      width = abs(box[3] - box[1]) 
      height = abs(box[2] - box[4])
      if width * height > size and self.is_in_crash_zone(self.get_center([box[1], box[2], width, height])):
        size = width * height
        big_box = box[:]
      draw.rectangle([box[1], box[2], box[3], box[4]])
      draw.text((box[1], box[4]), box[0] + ' ' + str(int(box[5] * 100)) + '%')
      box[3] = width
      box[4] = height

    # use blue borders for the biggest box in the crash zone
    if big_box is not None:
      draw.rectangle([big_box[1], big_box[2], big_box[3], big_box[4]], outline='blue')

    end = timer()
    tensor_time = end - start
    print('tensor ms: ' + str(tensor_time * 1000))
    print('total fps: ' + str(1.0 / tensor_time))
    print('')

    return {'image': image, 'labels': detections}

  @staticmethod
  def get_center(coords):
    pos = coords[:2]
    size = coords[2:4]
    return [pos[0] + size[0]/2, pos[1] - size[1]/2]

  @staticmethod
  def is_in_crash_zone(pos):
    """ Determine if a point is in the 'crash zone' """
    return Processor.CRASH_ZONE_START < pos[0] < Processor.CRASH_ZONE_END

