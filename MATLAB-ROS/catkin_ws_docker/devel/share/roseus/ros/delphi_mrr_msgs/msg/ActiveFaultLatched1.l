;; Auto-generated. Do not edit!


(when (boundp 'delphi_mrr_msgs::ActiveFaultLatched1)
  (if (not (find-package "DELPHI_MRR_MSGS"))
    (make-package "DELPHI_MRR_MSGS"))
  (shadow 'ActiveFaultLatched1 (find-package "DELPHI_MRR_MSGS")))
(unless (find-package "DELPHI_MRR_MSGS::ACTIVEFAULTLATCHED1")
  (make-package "DELPHI_MRR_MSGS::ACTIVEFAULTLATCHED1"))

(in-package "ROS")
;;//! \htmlinclude ActiveFaultLatched1.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass delphi_mrr_msgs::ActiveFaultLatched1
  :super ros::object
  :slots (_header _active_flt_latched_byte7_bit7 _active_flt_latched_byte7_bit6 _active_flt_latched_byte7_bit5 _active_flt_latched_byte7_bit4 _arm_to_dsp_chksum_fault _dsp_to_arm_chksum_fault _host_to_arm_chksum_fault _arm_to_host_chksum_fault _loop_bw_outof_range _dsp_overrun_fault _active_flt_latched_byte6_bit5 _tuning_sensitivity_fault _saturated_tuning_freq_fault _local_osc_power_fault _transmitter_power_fault _active_flt_latched_byte6_bit0 _active_flt_latched_byte5_bit7 _active_flt_latched_byte5_bit6 _xcvr_device_spi_fault _freq_synthesizer_spi_fault _analog_converter_devic_spi_fault _side_lobe_blockage _active_flt_latched_byte5_bit1 _mnr_blocked _ecu_temp_high_fault _transmitter_temp_high_fault _alignment_routine_failed_fault _unreasonable_radar_data _microprocessor_temp_high_fault _vertical_alignment_outof_range _horizontal_alignment_outof_range _factory_alignment_mode _battery_low_fault _battery_high_fault _v1_p25_supply_outof_range _active_flt_latched_byte3_bit4 _thermistor_outof_range _v3_p3_dac_supply_outof_range _v3_p3_raw_supply_outof_range _v5_supply_outof_range _transmitter_id_fault _active_flt_latched_byte2_bit6 _active_flt_latched_byte2_bit5 _active_flt_latched_byte2_bit4 _active_flt_latched_byte2_bit3 _active_flt_latched_byte2_bit2 _pcan_missing_msg_fault _pcan_bus_off _active_flt_latched_byte1_bit7 _active_flt_latched_byte1_bit6 _instruction_set_check_fault _stack_overflow_fault _watchdog_fault _pll_lock_fault _active_flt_latched_byte1_bit1 _ram_memory_test_fault _usc_validation_fault _active_flt_latched_byte0_bit6 _active_flt_latched_byte0_bit5 _active_flt_latched_byte0_bit4 _active_flt_latched_byte0_bit3 _keep_alive_checksum_fault _program_calibration_flash_checksum _application_flash_checksum_fault ))

(defmethod delphi_mrr_msgs::ActiveFaultLatched1
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:active_flt_latched_byte7_bit7 __active_flt_latched_byte7_bit7) nil)
    ((:active_flt_latched_byte7_bit6 __active_flt_latched_byte7_bit6) nil)
    ((:active_flt_latched_byte7_bit5 __active_flt_latched_byte7_bit5) nil)
    ((:active_flt_latched_byte7_bit4 __active_flt_latched_byte7_bit4) nil)
    ((:arm_to_dsp_chksum_fault __arm_to_dsp_chksum_fault) nil)
    ((:dsp_to_arm_chksum_fault __dsp_to_arm_chksum_fault) nil)
    ((:host_to_arm_chksum_fault __host_to_arm_chksum_fault) nil)
    ((:arm_to_host_chksum_fault __arm_to_host_chksum_fault) nil)
    ((:loop_bw_outof_range __loop_bw_outof_range) nil)
    ((:dsp_overrun_fault __dsp_overrun_fault) nil)
    ((:active_flt_latched_byte6_bit5 __active_flt_latched_byte6_bit5) nil)
    ((:tuning_sensitivity_fault __tuning_sensitivity_fault) nil)
    ((:saturated_tuning_freq_fault __saturated_tuning_freq_fault) nil)
    ((:local_osc_power_fault __local_osc_power_fault) nil)
    ((:transmitter_power_fault __transmitter_power_fault) nil)
    ((:active_flt_latched_byte6_bit0 __active_flt_latched_byte6_bit0) nil)
    ((:active_flt_latched_byte5_bit7 __active_flt_latched_byte5_bit7) nil)
    ((:active_flt_latched_byte5_bit6 __active_flt_latched_byte5_bit6) nil)
    ((:xcvr_device_spi_fault __xcvr_device_spi_fault) nil)
    ((:freq_synthesizer_spi_fault __freq_synthesizer_spi_fault) nil)
    ((:analog_converter_devic_spi_fault __analog_converter_devic_spi_fault) nil)
    ((:side_lobe_blockage __side_lobe_blockage) nil)
    ((:active_flt_latched_byte5_bit1 __active_flt_latched_byte5_bit1) nil)
    ((:mnr_blocked __mnr_blocked) nil)
    ((:ecu_temp_high_fault __ecu_temp_high_fault) nil)
    ((:transmitter_temp_high_fault __transmitter_temp_high_fault) nil)
    ((:alignment_routine_failed_fault __alignment_routine_failed_fault) nil)
    ((:unreasonable_radar_data __unreasonable_radar_data) nil)
    ((:microprocessor_temp_high_fault __microprocessor_temp_high_fault) nil)
    ((:vertical_alignment_outof_range __vertical_alignment_outof_range) nil)
    ((:horizontal_alignment_outof_range __horizontal_alignment_outof_range) nil)
    ((:factory_alignment_mode __factory_alignment_mode) nil)
    ((:battery_low_fault __battery_low_fault) nil)
    ((:battery_high_fault __battery_high_fault) nil)
    ((:v1_p25_supply_outof_range __v1_p25_supply_outof_range) nil)
    ((:active_flt_latched_byte3_bit4 __active_flt_latched_byte3_bit4) nil)
    ((:thermistor_outof_range __thermistor_outof_range) nil)
    ((:v3_p3_dac_supply_outof_range __v3_p3_dac_supply_outof_range) nil)
    ((:v3_p3_raw_supply_outof_range __v3_p3_raw_supply_outof_range) nil)
    ((:v5_supply_outof_range __v5_supply_outof_range) nil)
    ((:transmitter_id_fault __transmitter_id_fault) nil)
    ((:active_flt_latched_byte2_bit6 __active_flt_latched_byte2_bit6) nil)
    ((:active_flt_latched_byte2_bit5 __active_flt_latched_byte2_bit5) nil)
    ((:active_flt_latched_byte2_bit4 __active_flt_latched_byte2_bit4) nil)
    ((:active_flt_latched_byte2_bit3 __active_flt_latched_byte2_bit3) nil)
    ((:active_flt_latched_byte2_bit2 __active_flt_latched_byte2_bit2) nil)
    ((:pcan_missing_msg_fault __pcan_missing_msg_fault) nil)
    ((:pcan_bus_off __pcan_bus_off) nil)
    ((:active_flt_latched_byte1_bit7 __active_flt_latched_byte1_bit7) nil)
    ((:active_flt_latched_byte1_bit6 __active_flt_latched_byte1_bit6) nil)
    ((:instruction_set_check_fault __instruction_set_check_fault) nil)
    ((:stack_overflow_fault __stack_overflow_fault) nil)
    ((:watchdog_fault __watchdog_fault) nil)
    ((:pll_lock_fault __pll_lock_fault) nil)
    ((:active_flt_latched_byte1_bit1 __active_flt_latched_byte1_bit1) nil)
    ((:ram_memory_test_fault __ram_memory_test_fault) nil)
    ((:usc_validation_fault __usc_validation_fault) nil)
    ((:active_flt_latched_byte0_bit6 __active_flt_latched_byte0_bit6) nil)
    ((:active_flt_latched_byte0_bit5 __active_flt_latched_byte0_bit5) nil)
    ((:active_flt_latched_byte0_bit4 __active_flt_latched_byte0_bit4) nil)
    ((:active_flt_latched_byte0_bit3 __active_flt_latched_byte0_bit3) nil)
    ((:keep_alive_checksum_fault __keep_alive_checksum_fault) nil)
    ((:program_calibration_flash_checksum __program_calibration_flash_checksum) nil)
    ((:application_flash_checksum_fault __application_flash_checksum_fault) nil)
    )
   (send-super :init)
   (setq _header __header)
   (setq _active_flt_latched_byte7_bit7 __active_flt_latched_byte7_bit7)
   (setq _active_flt_latched_byte7_bit6 __active_flt_latched_byte7_bit6)
   (setq _active_flt_latched_byte7_bit5 __active_flt_latched_byte7_bit5)
   (setq _active_flt_latched_byte7_bit4 __active_flt_latched_byte7_bit4)
   (setq _arm_to_dsp_chksum_fault __arm_to_dsp_chksum_fault)
   (setq _dsp_to_arm_chksum_fault __dsp_to_arm_chksum_fault)
   (setq _host_to_arm_chksum_fault __host_to_arm_chksum_fault)
   (setq _arm_to_host_chksum_fault __arm_to_host_chksum_fault)
   (setq _loop_bw_outof_range __loop_bw_outof_range)
   (setq _dsp_overrun_fault __dsp_overrun_fault)
   (setq _active_flt_latched_byte6_bit5 __active_flt_latched_byte6_bit5)
   (setq _tuning_sensitivity_fault __tuning_sensitivity_fault)
   (setq _saturated_tuning_freq_fault __saturated_tuning_freq_fault)
   (setq _local_osc_power_fault __local_osc_power_fault)
   (setq _transmitter_power_fault __transmitter_power_fault)
   (setq _active_flt_latched_byte6_bit0 __active_flt_latched_byte6_bit0)
   (setq _active_flt_latched_byte5_bit7 __active_flt_latched_byte5_bit7)
   (setq _active_flt_latched_byte5_bit6 __active_flt_latched_byte5_bit6)
   (setq _xcvr_device_spi_fault __xcvr_device_spi_fault)
   (setq _freq_synthesizer_spi_fault __freq_synthesizer_spi_fault)
   (setq _analog_converter_devic_spi_fault __analog_converter_devic_spi_fault)
   (setq _side_lobe_blockage __side_lobe_blockage)
   (setq _active_flt_latched_byte5_bit1 __active_flt_latched_byte5_bit1)
   (setq _mnr_blocked __mnr_blocked)
   (setq _ecu_temp_high_fault __ecu_temp_high_fault)
   (setq _transmitter_temp_high_fault __transmitter_temp_high_fault)
   (setq _alignment_routine_failed_fault __alignment_routine_failed_fault)
   (setq _unreasonable_radar_data __unreasonable_radar_data)
   (setq _microprocessor_temp_high_fault __microprocessor_temp_high_fault)
   (setq _vertical_alignment_outof_range __vertical_alignment_outof_range)
   (setq _horizontal_alignment_outof_range __horizontal_alignment_outof_range)
   (setq _factory_alignment_mode __factory_alignment_mode)
   (setq _battery_low_fault __battery_low_fault)
   (setq _battery_high_fault __battery_high_fault)
   (setq _v1_p25_supply_outof_range __v1_p25_supply_outof_range)
   (setq _active_flt_latched_byte3_bit4 __active_flt_latched_byte3_bit4)
   (setq _thermistor_outof_range __thermistor_outof_range)
   (setq _v3_p3_dac_supply_outof_range __v3_p3_dac_supply_outof_range)
   (setq _v3_p3_raw_supply_outof_range __v3_p3_raw_supply_outof_range)
   (setq _v5_supply_outof_range __v5_supply_outof_range)
   (setq _transmitter_id_fault __transmitter_id_fault)
   (setq _active_flt_latched_byte2_bit6 __active_flt_latched_byte2_bit6)
   (setq _active_flt_latched_byte2_bit5 __active_flt_latched_byte2_bit5)
   (setq _active_flt_latched_byte2_bit4 __active_flt_latched_byte2_bit4)
   (setq _active_flt_latched_byte2_bit3 __active_flt_latched_byte2_bit3)
   (setq _active_flt_latched_byte2_bit2 __active_flt_latched_byte2_bit2)
   (setq _pcan_missing_msg_fault __pcan_missing_msg_fault)
   (setq _pcan_bus_off __pcan_bus_off)
   (setq _active_flt_latched_byte1_bit7 __active_flt_latched_byte1_bit7)
   (setq _active_flt_latched_byte1_bit6 __active_flt_latched_byte1_bit6)
   (setq _instruction_set_check_fault __instruction_set_check_fault)
   (setq _stack_overflow_fault __stack_overflow_fault)
   (setq _watchdog_fault __watchdog_fault)
   (setq _pll_lock_fault __pll_lock_fault)
   (setq _active_flt_latched_byte1_bit1 __active_flt_latched_byte1_bit1)
   (setq _ram_memory_test_fault __ram_memory_test_fault)
   (setq _usc_validation_fault __usc_validation_fault)
   (setq _active_flt_latched_byte0_bit6 __active_flt_latched_byte0_bit6)
   (setq _active_flt_latched_byte0_bit5 __active_flt_latched_byte0_bit5)
   (setq _active_flt_latched_byte0_bit4 __active_flt_latched_byte0_bit4)
   (setq _active_flt_latched_byte0_bit3 __active_flt_latched_byte0_bit3)
   (setq _keep_alive_checksum_fault __keep_alive_checksum_fault)
   (setq _program_calibration_flash_checksum __program_calibration_flash_checksum)
   (setq _application_flash_checksum_fault __application_flash_checksum_fault)
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:active_flt_latched_byte7_bit7
   (&optional __active_flt_latched_byte7_bit7)
   (if __active_flt_latched_byte7_bit7 (setq _active_flt_latched_byte7_bit7 __active_flt_latched_byte7_bit7)) _active_flt_latched_byte7_bit7)
  (:active_flt_latched_byte7_bit6
   (&optional __active_flt_latched_byte7_bit6)
   (if __active_flt_latched_byte7_bit6 (setq _active_flt_latched_byte7_bit6 __active_flt_latched_byte7_bit6)) _active_flt_latched_byte7_bit6)
  (:active_flt_latched_byte7_bit5
   (&optional __active_flt_latched_byte7_bit5)
   (if __active_flt_latched_byte7_bit5 (setq _active_flt_latched_byte7_bit5 __active_flt_latched_byte7_bit5)) _active_flt_latched_byte7_bit5)
  (:active_flt_latched_byte7_bit4
   (&optional __active_flt_latched_byte7_bit4)
   (if __active_flt_latched_byte7_bit4 (setq _active_flt_latched_byte7_bit4 __active_flt_latched_byte7_bit4)) _active_flt_latched_byte7_bit4)
  (:arm_to_dsp_chksum_fault
   (&optional __arm_to_dsp_chksum_fault)
   (if __arm_to_dsp_chksum_fault (setq _arm_to_dsp_chksum_fault __arm_to_dsp_chksum_fault)) _arm_to_dsp_chksum_fault)
  (:dsp_to_arm_chksum_fault
   (&optional __dsp_to_arm_chksum_fault)
   (if __dsp_to_arm_chksum_fault (setq _dsp_to_arm_chksum_fault __dsp_to_arm_chksum_fault)) _dsp_to_arm_chksum_fault)
  (:host_to_arm_chksum_fault
   (&optional __host_to_arm_chksum_fault)
   (if __host_to_arm_chksum_fault (setq _host_to_arm_chksum_fault __host_to_arm_chksum_fault)) _host_to_arm_chksum_fault)
  (:arm_to_host_chksum_fault
   (&optional __arm_to_host_chksum_fault)
   (if __arm_to_host_chksum_fault (setq _arm_to_host_chksum_fault __arm_to_host_chksum_fault)) _arm_to_host_chksum_fault)
  (:loop_bw_outof_range
   (&optional __loop_bw_outof_range)
   (if __loop_bw_outof_range (setq _loop_bw_outof_range __loop_bw_outof_range)) _loop_bw_outof_range)
  (:dsp_overrun_fault
   (&optional __dsp_overrun_fault)
   (if __dsp_overrun_fault (setq _dsp_overrun_fault __dsp_overrun_fault)) _dsp_overrun_fault)
  (:active_flt_latched_byte6_bit5
   (&optional __active_flt_latched_byte6_bit5)
   (if __active_flt_latched_byte6_bit5 (setq _active_flt_latched_byte6_bit5 __active_flt_latched_byte6_bit5)) _active_flt_latched_byte6_bit5)
  (:tuning_sensitivity_fault
   (&optional __tuning_sensitivity_fault)
   (if __tuning_sensitivity_fault (setq _tuning_sensitivity_fault __tuning_sensitivity_fault)) _tuning_sensitivity_fault)
  (:saturated_tuning_freq_fault
   (&optional __saturated_tuning_freq_fault)
   (if __saturated_tuning_freq_fault (setq _saturated_tuning_freq_fault __saturated_tuning_freq_fault)) _saturated_tuning_freq_fault)
  (:local_osc_power_fault
   (&optional __local_osc_power_fault)
   (if __local_osc_power_fault (setq _local_osc_power_fault __local_osc_power_fault)) _local_osc_power_fault)
  (:transmitter_power_fault
   (&optional __transmitter_power_fault)
   (if __transmitter_power_fault (setq _transmitter_power_fault __transmitter_power_fault)) _transmitter_power_fault)
  (:active_flt_latched_byte6_bit0
   (&optional __active_flt_latched_byte6_bit0)
   (if __active_flt_latched_byte6_bit0 (setq _active_flt_latched_byte6_bit0 __active_flt_latched_byte6_bit0)) _active_flt_latched_byte6_bit0)
  (:active_flt_latched_byte5_bit7
   (&optional __active_flt_latched_byte5_bit7)
   (if __active_flt_latched_byte5_bit7 (setq _active_flt_latched_byte5_bit7 __active_flt_latched_byte5_bit7)) _active_flt_latched_byte5_bit7)
  (:active_flt_latched_byte5_bit6
   (&optional __active_flt_latched_byte5_bit6)
   (if __active_flt_latched_byte5_bit6 (setq _active_flt_latched_byte5_bit6 __active_flt_latched_byte5_bit6)) _active_flt_latched_byte5_bit6)
  (:xcvr_device_spi_fault
   (&optional __xcvr_device_spi_fault)
   (if __xcvr_device_spi_fault (setq _xcvr_device_spi_fault __xcvr_device_spi_fault)) _xcvr_device_spi_fault)
  (:freq_synthesizer_spi_fault
   (&optional __freq_synthesizer_spi_fault)
   (if __freq_synthesizer_spi_fault (setq _freq_synthesizer_spi_fault __freq_synthesizer_spi_fault)) _freq_synthesizer_spi_fault)
  (:analog_converter_devic_spi_fault
   (&optional __analog_converter_devic_spi_fault)
   (if __analog_converter_devic_spi_fault (setq _analog_converter_devic_spi_fault __analog_converter_devic_spi_fault)) _analog_converter_devic_spi_fault)
  (:side_lobe_blockage
   (&optional __side_lobe_blockage)
   (if __side_lobe_blockage (setq _side_lobe_blockage __side_lobe_blockage)) _side_lobe_blockage)
  (:active_flt_latched_byte5_bit1
   (&optional __active_flt_latched_byte5_bit1)
   (if __active_flt_latched_byte5_bit1 (setq _active_flt_latched_byte5_bit1 __active_flt_latched_byte5_bit1)) _active_flt_latched_byte5_bit1)
  (:mnr_blocked
   (&optional __mnr_blocked)
   (if __mnr_blocked (setq _mnr_blocked __mnr_blocked)) _mnr_blocked)
  (:ecu_temp_high_fault
   (&optional __ecu_temp_high_fault)
   (if __ecu_temp_high_fault (setq _ecu_temp_high_fault __ecu_temp_high_fault)) _ecu_temp_high_fault)
  (:transmitter_temp_high_fault
   (&optional __transmitter_temp_high_fault)
   (if __transmitter_temp_high_fault (setq _transmitter_temp_high_fault __transmitter_temp_high_fault)) _transmitter_temp_high_fault)
  (:alignment_routine_failed_fault
   (&optional __alignment_routine_failed_fault)
   (if __alignment_routine_failed_fault (setq _alignment_routine_failed_fault __alignment_routine_failed_fault)) _alignment_routine_failed_fault)
  (:unreasonable_radar_data
   (&optional __unreasonable_radar_data)
   (if __unreasonable_radar_data (setq _unreasonable_radar_data __unreasonable_radar_data)) _unreasonable_radar_data)
  (:microprocessor_temp_high_fault
   (&optional __microprocessor_temp_high_fault)
   (if __microprocessor_temp_high_fault (setq _microprocessor_temp_high_fault __microprocessor_temp_high_fault)) _microprocessor_temp_high_fault)
  (:vertical_alignment_outof_range
   (&optional __vertical_alignment_outof_range)
   (if __vertical_alignment_outof_range (setq _vertical_alignment_outof_range __vertical_alignment_outof_range)) _vertical_alignment_outof_range)
  (:horizontal_alignment_outof_range
   (&optional __horizontal_alignment_outof_range)
   (if __horizontal_alignment_outof_range (setq _horizontal_alignment_outof_range __horizontal_alignment_outof_range)) _horizontal_alignment_outof_range)
  (:factory_alignment_mode
   (&optional __factory_alignment_mode)
   (if __factory_alignment_mode (setq _factory_alignment_mode __factory_alignment_mode)) _factory_alignment_mode)
  (:battery_low_fault
   (&optional __battery_low_fault)
   (if __battery_low_fault (setq _battery_low_fault __battery_low_fault)) _battery_low_fault)
  (:battery_high_fault
   (&optional __battery_high_fault)
   (if __battery_high_fault (setq _battery_high_fault __battery_high_fault)) _battery_high_fault)
  (:v1_p25_supply_outof_range
   (&optional __v1_p25_supply_outof_range)
   (if __v1_p25_supply_outof_range (setq _v1_p25_supply_outof_range __v1_p25_supply_outof_range)) _v1_p25_supply_outof_range)
  (:active_flt_latched_byte3_bit4
   (&optional __active_flt_latched_byte3_bit4)
   (if __active_flt_latched_byte3_bit4 (setq _active_flt_latched_byte3_bit4 __active_flt_latched_byte3_bit4)) _active_flt_latched_byte3_bit4)
  (:thermistor_outof_range
   (&optional __thermistor_outof_range)
   (if __thermistor_outof_range (setq _thermistor_outof_range __thermistor_outof_range)) _thermistor_outof_range)
  (:v3_p3_dac_supply_outof_range
   (&optional __v3_p3_dac_supply_outof_range)
   (if __v3_p3_dac_supply_outof_range (setq _v3_p3_dac_supply_outof_range __v3_p3_dac_supply_outof_range)) _v3_p3_dac_supply_outof_range)
  (:v3_p3_raw_supply_outof_range
   (&optional __v3_p3_raw_supply_outof_range)
   (if __v3_p3_raw_supply_outof_range (setq _v3_p3_raw_supply_outof_range __v3_p3_raw_supply_outof_range)) _v3_p3_raw_supply_outof_range)
  (:v5_supply_outof_range
   (&optional __v5_supply_outof_range)
   (if __v5_supply_outof_range (setq _v5_supply_outof_range __v5_supply_outof_range)) _v5_supply_outof_range)
  (:transmitter_id_fault
   (&optional __transmitter_id_fault)
   (if __transmitter_id_fault (setq _transmitter_id_fault __transmitter_id_fault)) _transmitter_id_fault)
  (:active_flt_latched_byte2_bit6
   (&optional __active_flt_latched_byte2_bit6)
   (if __active_flt_latched_byte2_bit6 (setq _active_flt_latched_byte2_bit6 __active_flt_latched_byte2_bit6)) _active_flt_latched_byte2_bit6)
  (:active_flt_latched_byte2_bit5
   (&optional __active_flt_latched_byte2_bit5)
   (if __active_flt_latched_byte2_bit5 (setq _active_flt_latched_byte2_bit5 __active_flt_latched_byte2_bit5)) _active_flt_latched_byte2_bit5)
  (:active_flt_latched_byte2_bit4
   (&optional __active_flt_latched_byte2_bit4)
   (if __active_flt_latched_byte2_bit4 (setq _active_flt_latched_byte2_bit4 __active_flt_latched_byte2_bit4)) _active_flt_latched_byte2_bit4)
  (:active_flt_latched_byte2_bit3
   (&optional __active_flt_latched_byte2_bit3)
   (if __active_flt_latched_byte2_bit3 (setq _active_flt_latched_byte2_bit3 __active_flt_latched_byte2_bit3)) _active_flt_latched_byte2_bit3)
  (:active_flt_latched_byte2_bit2
   (&optional __active_flt_latched_byte2_bit2)
   (if __active_flt_latched_byte2_bit2 (setq _active_flt_latched_byte2_bit2 __active_flt_latched_byte2_bit2)) _active_flt_latched_byte2_bit2)
  (:pcan_missing_msg_fault
   (&optional __pcan_missing_msg_fault)
   (if __pcan_missing_msg_fault (setq _pcan_missing_msg_fault __pcan_missing_msg_fault)) _pcan_missing_msg_fault)
  (:pcan_bus_off
   (&optional __pcan_bus_off)
   (if __pcan_bus_off (setq _pcan_bus_off __pcan_bus_off)) _pcan_bus_off)
  (:active_flt_latched_byte1_bit7
   (&optional __active_flt_latched_byte1_bit7)
   (if __active_flt_latched_byte1_bit7 (setq _active_flt_latched_byte1_bit7 __active_flt_latched_byte1_bit7)) _active_flt_latched_byte1_bit7)
  (:active_flt_latched_byte1_bit6
   (&optional __active_flt_latched_byte1_bit6)
   (if __active_flt_latched_byte1_bit6 (setq _active_flt_latched_byte1_bit6 __active_flt_latched_byte1_bit6)) _active_flt_latched_byte1_bit6)
  (:instruction_set_check_fault
   (&optional __instruction_set_check_fault)
   (if __instruction_set_check_fault (setq _instruction_set_check_fault __instruction_set_check_fault)) _instruction_set_check_fault)
  (:stack_overflow_fault
   (&optional __stack_overflow_fault)
   (if __stack_overflow_fault (setq _stack_overflow_fault __stack_overflow_fault)) _stack_overflow_fault)
  (:watchdog_fault
   (&optional __watchdog_fault)
   (if __watchdog_fault (setq _watchdog_fault __watchdog_fault)) _watchdog_fault)
  (:pll_lock_fault
   (&optional __pll_lock_fault)
   (if __pll_lock_fault (setq _pll_lock_fault __pll_lock_fault)) _pll_lock_fault)
  (:active_flt_latched_byte1_bit1
   (&optional __active_flt_latched_byte1_bit1)
   (if __active_flt_latched_byte1_bit1 (setq _active_flt_latched_byte1_bit1 __active_flt_latched_byte1_bit1)) _active_flt_latched_byte1_bit1)
  (:ram_memory_test_fault
   (&optional __ram_memory_test_fault)
   (if __ram_memory_test_fault (setq _ram_memory_test_fault __ram_memory_test_fault)) _ram_memory_test_fault)
  (:usc_validation_fault
   (&optional __usc_validation_fault)
   (if __usc_validation_fault (setq _usc_validation_fault __usc_validation_fault)) _usc_validation_fault)
  (:active_flt_latched_byte0_bit6
   (&optional __active_flt_latched_byte0_bit6)
   (if __active_flt_latched_byte0_bit6 (setq _active_flt_latched_byte0_bit6 __active_flt_latched_byte0_bit6)) _active_flt_latched_byte0_bit6)
  (:active_flt_latched_byte0_bit5
   (&optional __active_flt_latched_byte0_bit5)
   (if __active_flt_latched_byte0_bit5 (setq _active_flt_latched_byte0_bit5 __active_flt_latched_byte0_bit5)) _active_flt_latched_byte0_bit5)
  (:active_flt_latched_byte0_bit4
   (&optional __active_flt_latched_byte0_bit4)
   (if __active_flt_latched_byte0_bit4 (setq _active_flt_latched_byte0_bit4 __active_flt_latched_byte0_bit4)) _active_flt_latched_byte0_bit4)
  (:active_flt_latched_byte0_bit3
   (&optional __active_flt_latched_byte0_bit3)
   (if __active_flt_latched_byte0_bit3 (setq _active_flt_latched_byte0_bit3 __active_flt_latched_byte0_bit3)) _active_flt_latched_byte0_bit3)
  (:keep_alive_checksum_fault
   (&optional __keep_alive_checksum_fault)
   (if __keep_alive_checksum_fault (setq _keep_alive_checksum_fault __keep_alive_checksum_fault)) _keep_alive_checksum_fault)
  (:program_calibration_flash_checksum
   (&optional __program_calibration_flash_checksum)
   (if __program_calibration_flash_checksum (setq _program_calibration_flash_checksum __program_calibration_flash_checksum)) _program_calibration_flash_checksum)
  (:application_flash_checksum_fault
   (&optional __application_flash_checksum_fault)
   (if __application_flash_checksum_fault (setq _application_flash_checksum_fault __application_flash_checksum_fault)) _application_flash_checksum_fault)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; bool _active_flt_latched_byte7_bit7
    1
    ;; bool _active_flt_latched_byte7_bit6
    1
    ;; bool _active_flt_latched_byte7_bit5
    1
    ;; bool _active_flt_latched_byte7_bit4
    1
    ;; bool _arm_to_dsp_chksum_fault
    1
    ;; bool _dsp_to_arm_chksum_fault
    1
    ;; bool _host_to_arm_chksum_fault
    1
    ;; bool _arm_to_host_chksum_fault
    1
    ;; bool _loop_bw_outof_range
    1
    ;; bool _dsp_overrun_fault
    1
    ;; bool _active_flt_latched_byte6_bit5
    1
    ;; bool _tuning_sensitivity_fault
    1
    ;; bool _saturated_tuning_freq_fault
    1
    ;; bool _local_osc_power_fault
    1
    ;; bool _transmitter_power_fault
    1
    ;; bool _active_flt_latched_byte6_bit0
    1
    ;; bool _active_flt_latched_byte5_bit7
    1
    ;; bool _active_flt_latched_byte5_bit6
    1
    ;; bool _xcvr_device_spi_fault
    1
    ;; bool _freq_synthesizer_spi_fault
    1
    ;; bool _analog_converter_devic_spi_fault
    1
    ;; bool _side_lobe_blockage
    1
    ;; bool _active_flt_latched_byte5_bit1
    1
    ;; bool _mnr_blocked
    1
    ;; bool _ecu_temp_high_fault
    1
    ;; bool _transmitter_temp_high_fault
    1
    ;; bool _alignment_routine_failed_fault
    1
    ;; bool _unreasonable_radar_data
    1
    ;; bool _microprocessor_temp_high_fault
    1
    ;; bool _vertical_alignment_outof_range
    1
    ;; bool _horizontal_alignment_outof_range
    1
    ;; bool _factory_alignment_mode
    1
    ;; bool _battery_low_fault
    1
    ;; bool _battery_high_fault
    1
    ;; bool _v1_p25_supply_outof_range
    1
    ;; bool _active_flt_latched_byte3_bit4
    1
    ;; bool _thermistor_outof_range
    1
    ;; bool _v3_p3_dac_supply_outof_range
    1
    ;; bool _v3_p3_raw_supply_outof_range
    1
    ;; bool _v5_supply_outof_range
    1
    ;; bool _transmitter_id_fault
    1
    ;; bool _active_flt_latched_byte2_bit6
    1
    ;; bool _active_flt_latched_byte2_bit5
    1
    ;; bool _active_flt_latched_byte2_bit4
    1
    ;; bool _active_flt_latched_byte2_bit3
    1
    ;; bool _active_flt_latched_byte2_bit2
    1
    ;; bool _pcan_missing_msg_fault
    1
    ;; bool _pcan_bus_off
    1
    ;; bool _active_flt_latched_byte1_bit7
    1
    ;; bool _active_flt_latched_byte1_bit6
    1
    ;; bool _instruction_set_check_fault
    1
    ;; bool _stack_overflow_fault
    1
    ;; bool _watchdog_fault
    1
    ;; bool _pll_lock_fault
    1
    ;; bool _active_flt_latched_byte1_bit1
    1
    ;; bool _ram_memory_test_fault
    1
    ;; bool _usc_validation_fault
    1
    ;; bool _active_flt_latched_byte0_bit6
    1
    ;; bool _active_flt_latched_byte0_bit5
    1
    ;; bool _active_flt_latched_byte0_bit4
    1
    ;; bool _active_flt_latched_byte0_bit3
    1
    ;; bool _keep_alive_checksum_fault
    1
    ;; bool _program_calibration_flash_checksum
    1
    ;; bool _application_flash_checksum_fault
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; bool _active_flt_latched_byte7_bit7
       (if _active_flt_latched_byte7_bit7 (write-byte -1 s) (write-byte 0 s))
     ;; bool _active_flt_latched_byte7_bit6
       (if _active_flt_latched_byte7_bit6 (write-byte -1 s) (write-byte 0 s))
     ;; bool _active_flt_latched_byte7_bit5
       (if _active_flt_latched_byte7_bit5 (write-byte -1 s) (write-byte 0 s))
     ;; bool _active_flt_latched_byte7_bit4
       (if _active_flt_latched_byte7_bit4 (write-byte -1 s) (write-byte 0 s))
     ;; bool _arm_to_dsp_chksum_fault
       (if _arm_to_dsp_chksum_fault (write-byte -1 s) (write-byte 0 s))
     ;; bool _dsp_to_arm_chksum_fault
       (if _dsp_to_arm_chksum_fault (write-byte -1 s) (write-byte 0 s))
     ;; bool _host_to_arm_chksum_fault
       (if _host_to_arm_chksum_fault (write-byte -1 s) (write-byte 0 s))
     ;; bool _arm_to_host_chksum_fault
       (if _arm_to_host_chksum_fault (write-byte -1 s) (write-byte 0 s))
     ;; bool _loop_bw_outof_range
       (if _loop_bw_outof_range (write-byte -1 s) (write-byte 0 s))
     ;; bool _dsp_overrun_fault
       (if _dsp_overrun_fault (write-byte -1 s) (write-byte 0 s))
     ;; bool _active_flt_latched_byte6_bit5
       (if _active_flt_latched_byte6_bit5 (write-byte -1 s) (write-byte 0 s))
     ;; bool _tuning_sensitivity_fault
       (if _tuning_sensitivity_fault (write-byte -1 s) (write-byte 0 s))
     ;; bool _saturated_tuning_freq_fault
       (if _saturated_tuning_freq_fault (write-byte -1 s) (write-byte 0 s))
     ;; bool _local_osc_power_fault
       (if _local_osc_power_fault (write-byte -1 s) (write-byte 0 s))
     ;; bool _transmitter_power_fault
       (if _transmitter_power_fault (write-byte -1 s) (write-byte 0 s))
     ;; bool _active_flt_latched_byte6_bit0
       (if _active_flt_latched_byte6_bit0 (write-byte -1 s) (write-byte 0 s))
     ;; bool _active_flt_latched_byte5_bit7
       (if _active_flt_latched_byte5_bit7 (write-byte -1 s) (write-byte 0 s))
     ;; bool _active_flt_latched_byte5_bit6
       (if _active_flt_latched_byte5_bit6 (write-byte -1 s) (write-byte 0 s))
     ;; bool _xcvr_device_spi_fault
       (if _xcvr_device_spi_fault (write-byte -1 s) (write-byte 0 s))
     ;; bool _freq_synthesizer_spi_fault
       (if _freq_synthesizer_spi_fault (write-byte -1 s) (write-byte 0 s))
     ;; bool _analog_converter_devic_spi_fault
       (if _analog_converter_devic_spi_fault (write-byte -1 s) (write-byte 0 s))
     ;; bool _side_lobe_blockage
       (if _side_lobe_blockage (write-byte -1 s) (write-byte 0 s))
     ;; bool _active_flt_latched_byte5_bit1
       (if _active_flt_latched_byte5_bit1 (write-byte -1 s) (write-byte 0 s))
     ;; bool _mnr_blocked
       (if _mnr_blocked (write-byte -1 s) (write-byte 0 s))
     ;; bool _ecu_temp_high_fault
       (if _ecu_temp_high_fault (write-byte -1 s) (write-byte 0 s))
     ;; bool _transmitter_temp_high_fault
       (if _transmitter_temp_high_fault (write-byte -1 s) (write-byte 0 s))
     ;; bool _alignment_routine_failed_fault
       (if _alignment_routine_failed_fault (write-byte -1 s) (write-byte 0 s))
     ;; bool _unreasonable_radar_data
       (if _unreasonable_radar_data (write-byte -1 s) (write-byte 0 s))
     ;; bool _microprocessor_temp_high_fault
       (if _microprocessor_temp_high_fault (write-byte -1 s) (write-byte 0 s))
     ;; bool _vertical_alignment_outof_range
       (if _vertical_alignment_outof_range (write-byte -1 s) (write-byte 0 s))
     ;; bool _horizontal_alignment_outof_range
       (if _horizontal_alignment_outof_range (write-byte -1 s) (write-byte 0 s))
     ;; bool _factory_alignment_mode
       (if _factory_alignment_mode (write-byte -1 s) (write-byte 0 s))
     ;; bool _battery_low_fault
       (if _battery_low_fault (write-byte -1 s) (write-byte 0 s))
     ;; bool _battery_high_fault
       (if _battery_high_fault (write-byte -1 s) (write-byte 0 s))
     ;; bool _v1_p25_supply_outof_range
       (if _v1_p25_supply_outof_range (write-byte -1 s) (write-byte 0 s))
     ;; bool _active_flt_latched_byte3_bit4
       (if _active_flt_latched_byte3_bit4 (write-byte -1 s) (write-byte 0 s))
     ;; bool _thermistor_outof_range
       (if _thermistor_outof_range (write-byte -1 s) (write-byte 0 s))
     ;; bool _v3_p3_dac_supply_outof_range
       (if _v3_p3_dac_supply_outof_range (write-byte -1 s) (write-byte 0 s))
     ;; bool _v3_p3_raw_supply_outof_range
       (if _v3_p3_raw_supply_outof_range (write-byte -1 s) (write-byte 0 s))
     ;; bool _v5_supply_outof_range
       (if _v5_supply_outof_range (write-byte -1 s) (write-byte 0 s))
     ;; bool _transmitter_id_fault
       (if _transmitter_id_fault (write-byte -1 s) (write-byte 0 s))
     ;; bool _active_flt_latched_byte2_bit6
       (if _active_flt_latched_byte2_bit6 (write-byte -1 s) (write-byte 0 s))
     ;; bool _active_flt_latched_byte2_bit5
       (if _active_flt_latched_byte2_bit5 (write-byte -1 s) (write-byte 0 s))
     ;; bool _active_flt_latched_byte2_bit4
       (if _active_flt_latched_byte2_bit4 (write-byte -1 s) (write-byte 0 s))
     ;; bool _active_flt_latched_byte2_bit3
       (if _active_flt_latched_byte2_bit3 (write-byte -1 s) (write-byte 0 s))
     ;; bool _active_flt_latched_byte2_bit2
       (if _active_flt_latched_byte2_bit2 (write-byte -1 s) (write-byte 0 s))
     ;; bool _pcan_missing_msg_fault
       (if _pcan_missing_msg_fault (write-byte -1 s) (write-byte 0 s))
     ;; bool _pcan_bus_off
       (if _pcan_bus_off (write-byte -1 s) (write-byte 0 s))
     ;; bool _active_flt_latched_byte1_bit7
       (if _active_flt_latched_byte1_bit7 (write-byte -1 s) (write-byte 0 s))
     ;; bool _active_flt_latched_byte1_bit6
       (if _active_flt_latched_byte1_bit6 (write-byte -1 s) (write-byte 0 s))
     ;; bool _instruction_set_check_fault
       (if _instruction_set_check_fault (write-byte -1 s) (write-byte 0 s))
     ;; bool _stack_overflow_fault
       (if _stack_overflow_fault (write-byte -1 s) (write-byte 0 s))
     ;; bool _watchdog_fault
       (if _watchdog_fault (write-byte -1 s) (write-byte 0 s))
     ;; bool _pll_lock_fault
       (if _pll_lock_fault (write-byte -1 s) (write-byte 0 s))
     ;; bool _active_flt_latched_byte1_bit1
       (if _active_flt_latched_byte1_bit1 (write-byte -1 s) (write-byte 0 s))
     ;; bool _ram_memory_test_fault
       (if _ram_memory_test_fault (write-byte -1 s) (write-byte 0 s))
     ;; bool _usc_validation_fault
       (if _usc_validation_fault (write-byte -1 s) (write-byte 0 s))
     ;; bool _active_flt_latched_byte0_bit6
       (if _active_flt_latched_byte0_bit6 (write-byte -1 s) (write-byte 0 s))
     ;; bool _active_flt_latched_byte0_bit5
       (if _active_flt_latched_byte0_bit5 (write-byte -1 s) (write-byte 0 s))
     ;; bool _active_flt_latched_byte0_bit4
       (if _active_flt_latched_byte0_bit4 (write-byte -1 s) (write-byte 0 s))
     ;; bool _active_flt_latched_byte0_bit3
       (if _active_flt_latched_byte0_bit3 (write-byte -1 s) (write-byte 0 s))
     ;; bool _keep_alive_checksum_fault
       (if _keep_alive_checksum_fault (write-byte -1 s) (write-byte 0 s))
     ;; bool _program_calibration_flash_checksum
       (if _program_calibration_flash_checksum (write-byte -1 s) (write-byte 0 s))
     ;; bool _application_flash_checksum_fault
       (if _application_flash_checksum_fault (write-byte -1 s) (write-byte 0 s))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; bool _active_flt_latched_byte7_bit7
     (setq _active_flt_latched_byte7_bit7 (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _active_flt_latched_byte7_bit6
     (setq _active_flt_latched_byte7_bit6 (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _active_flt_latched_byte7_bit5
     (setq _active_flt_latched_byte7_bit5 (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _active_flt_latched_byte7_bit4
     (setq _active_flt_latched_byte7_bit4 (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _arm_to_dsp_chksum_fault
     (setq _arm_to_dsp_chksum_fault (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _dsp_to_arm_chksum_fault
     (setq _dsp_to_arm_chksum_fault (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _host_to_arm_chksum_fault
     (setq _host_to_arm_chksum_fault (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _arm_to_host_chksum_fault
     (setq _arm_to_host_chksum_fault (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _loop_bw_outof_range
     (setq _loop_bw_outof_range (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _dsp_overrun_fault
     (setq _dsp_overrun_fault (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _active_flt_latched_byte6_bit5
     (setq _active_flt_latched_byte6_bit5 (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _tuning_sensitivity_fault
     (setq _tuning_sensitivity_fault (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _saturated_tuning_freq_fault
     (setq _saturated_tuning_freq_fault (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _local_osc_power_fault
     (setq _local_osc_power_fault (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _transmitter_power_fault
     (setq _transmitter_power_fault (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _active_flt_latched_byte6_bit0
     (setq _active_flt_latched_byte6_bit0 (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _active_flt_latched_byte5_bit7
     (setq _active_flt_latched_byte5_bit7 (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _active_flt_latched_byte5_bit6
     (setq _active_flt_latched_byte5_bit6 (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _xcvr_device_spi_fault
     (setq _xcvr_device_spi_fault (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _freq_synthesizer_spi_fault
     (setq _freq_synthesizer_spi_fault (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _analog_converter_devic_spi_fault
     (setq _analog_converter_devic_spi_fault (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _side_lobe_blockage
     (setq _side_lobe_blockage (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _active_flt_latched_byte5_bit1
     (setq _active_flt_latched_byte5_bit1 (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _mnr_blocked
     (setq _mnr_blocked (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _ecu_temp_high_fault
     (setq _ecu_temp_high_fault (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _transmitter_temp_high_fault
     (setq _transmitter_temp_high_fault (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _alignment_routine_failed_fault
     (setq _alignment_routine_failed_fault (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _unreasonable_radar_data
     (setq _unreasonable_radar_data (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _microprocessor_temp_high_fault
     (setq _microprocessor_temp_high_fault (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _vertical_alignment_outof_range
     (setq _vertical_alignment_outof_range (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _horizontal_alignment_outof_range
     (setq _horizontal_alignment_outof_range (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _factory_alignment_mode
     (setq _factory_alignment_mode (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _battery_low_fault
     (setq _battery_low_fault (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _battery_high_fault
     (setq _battery_high_fault (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _v1_p25_supply_outof_range
     (setq _v1_p25_supply_outof_range (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _active_flt_latched_byte3_bit4
     (setq _active_flt_latched_byte3_bit4 (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _thermistor_outof_range
     (setq _thermistor_outof_range (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _v3_p3_dac_supply_outof_range
     (setq _v3_p3_dac_supply_outof_range (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _v3_p3_raw_supply_outof_range
     (setq _v3_p3_raw_supply_outof_range (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _v5_supply_outof_range
     (setq _v5_supply_outof_range (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _transmitter_id_fault
     (setq _transmitter_id_fault (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _active_flt_latched_byte2_bit6
     (setq _active_flt_latched_byte2_bit6 (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _active_flt_latched_byte2_bit5
     (setq _active_flt_latched_byte2_bit5 (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _active_flt_latched_byte2_bit4
     (setq _active_flt_latched_byte2_bit4 (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _active_flt_latched_byte2_bit3
     (setq _active_flt_latched_byte2_bit3 (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _active_flt_latched_byte2_bit2
     (setq _active_flt_latched_byte2_bit2 (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _pcan_missing_msg_fault
     (setq _pcan_missing_msg_fault (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _pcan_bus_off
     (setq _pcan_bus_off (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _active_flt_latched_byte1_bit7
     (setq _active_flt_latched_byte1_bit7 (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _active_flt_latched_byte1_bit6
     (setq _active_flt_latched_byte1_bit6 (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _instruction_set_check_fault
     (setq _instruction_set_check_fault (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _stack_overflow_fault
     (setq _stack_overflow_fault (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _watchdog_fault
     (setq _watchdog_fault (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _pll_lock_fault
     (setq _pll_lock_fault (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _active_flt_latched_byte1_bit1
     (setq _active_flt_latched_byte1_bit1 (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _ram_memory_test_fault
     (setq _ram_memory_test_fault (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _usc_validation_fault
     (setq _usc_validation_fault (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _active_flt_latched_byte0_bit6
     (setq _active_flt_latched_byte0_bit6 (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _active_flt_latched_byte0_bit5
     (setq _active_flt_latched_byte0_bit5 (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _active_flt_latched_byte0_bit4
     (setq _active_flt_latched_byte0_bit4 (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _active_flt_latched_byte0_bit3
     (setq _active_flt_latched_byte0_bit3 (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _keep_alive_checksum_fault
     (setq _keep_alive_checksum_fault (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _program_calibration_flash_checksum
     (setq _program_calibration_flash_checksum (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _application_flash_checksum_fault
     (setq _application_flash_checksum_fault (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;;
   self)
  )

(setf (get delphi_mrr_msgs::ActiveFaultLatched1 :md5sum-) "5994984ee721acb9bf8573f88abcd9bc")
(setf (get delphi_mrr_msgs::ActiveFaultLatched1 :datatype-) "delphi_mrr_msgs/ActiveFaultLatched1")
(setf (get delphi_mrr_msgs::ActiveFaultLatched1 :definition-)
      "std_msgs/Header header

bool active_flt_latched_byte7_bit7
bool active_flt_latched_byte7_bit6
bool active_flt_latched_byte7_bit5
bool active_flt_latched_byte7_bit4
bool arm_to_dsp_chksum_fault
bool dsp_to_arm_chksum_fault
bool host_to_arm_chksum_fault
bool arm_to_host_chksum_fault
bool loop_bw_outof_range
bool dsp_overrun_fault
bool active_flt_latched_byte6_bit5
bool tuning_sensitivity_fault
bool saturated_tuning_freq_fault
bool local_osc_power_fault
bool transmitter_power_fault
bool active_flt_latched_byte6_bit0
bool active_flt_latched_byte5_bit7
bool active_flt_latched_byte5_bit6
bool xcvr_device_spi_fault
bool freq_synthesizer_spi_fault
bool analog_converter_devic_spi_fault
bool side_lobe_blockage
bool active_flt_latched_byte5_bit1
bool mnr_blocked
bool ecu_temp_high_fault
bool transmitter_temp_high_fault
bool alignment_routine_failed_fault
bool unreasonable_radar_data
bool microprocessor_temp_high_fault
bool vertical_alignment_outof_range
bool horizontal_alignment_outof_range
bool factory_alignment_mode
bool battery_low_fault
bool battery_high_fault
bool v1_p25_supply_outof_range
bool active_flt_latched_byte3_bit4
bool thermistor_outof_range
bool v3_p3_dac_supply_outof_range
bool v3_p3_raw_supply_outof_range
bool v5_supply_outof_range
bool transmitter_id_fault
bool active_flt_latched_byte2_bit6
bool active_flt_latched_byte2_bit5
bool active_flt_latched_byte2_bit4
bool active_flt_latched_byte2_bit3
bool active_flt_latched_byte2_bit2
bool pcan_missing_msg_fault
bool pcan_bus_off
bool active_flt_latched_byte1_bit7
bool active_flt_latched_byte1_bit6
bool instruction_set_check_fault
bool stack_overflow_fault
bool watchdog_fault
bool pll_lock_fault
bool active_flt_latched_byte1_bit1
bool ram_memory_test_fault
bool usc_validation_fault
bool active_flt_latched_byte0_bit6
bool active_flt_latched_byte0_bit5
bool active_flt_latched_byte0_bit4
bool active_flt_latched_byte0_bit3
bool keep_alive_checksum_fault
bool program_calibration_flash_checksum
bool application_flash_checksum_fault

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
# 0: no frame
# 1: global frame
string frame_id

")



(provide :delphi_mrr_msgs/ActiveFaultLatched1 "5994984ee721acb9bf8573f88abcd9bc")


