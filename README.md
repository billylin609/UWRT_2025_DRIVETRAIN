# UWRT_2025_DRIVETRAIN


TODO:
1. update this document with properly template; diagram and exmaple
2. verify the CAN bus Baud rate(Note: Set odrive side to be 250K)\
	will set the serial port buad rate to be the same and verify

Testing Connection Setup:
Jetson -> CAN Transceiver(with termination) -> |
                                               |
          DEMO_odrive (termination enabled) -> |

CAN Transceiver model number: https://www.waveshare.com/wiki/SN65HVD230_CAN_Board

CAN ID:
DEMO_odrive:
    axis0: 1
    axis1: 2
