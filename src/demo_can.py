#TODO: all the ros2 related python package are being removed :sob need to redo
"""
This example shows how sending a single message works.
"""


from __future__ import print_function
import can


def send_one():
    """Sends a single message."""

    # this uses the default configuration (for example from the config file)
    # see https://python-can.readthedocs.io/en/stable/configuration.html
    # Using specific buses works similar:
    bus = can.Bus(bustype='serial', channel='/dev/ttyS0', bitrate=250000)

    msg = can.Message(arbitration_id=0x01,
        data=[0, 25, 0, 1, 3, 1, 4, 1])

    try:
        bus.send(msg)
        print("Message sent on")
    except can.CanError:
        print("Message NOT sent")


if __name__ == "__main__":
    send_one()
