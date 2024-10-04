#setup instructions: 
# https://canable.io/getting-started.html
# https://pemd-sys.github.io/posts/Can-Comms-python/

import can

#try candlelight firmware for linux dev

#candlelight firmware
#bus = can.interface.Bus(bustype='socketcan', channel='can0', bitrate=500000)

#jetson can enable: https://forums.developer.nvidia.com/t/how-to-use-can-on-jetson-tx2/54125

# Stock slcan firmware on Windows
bus = can.interface.Bus(interface='pcan', bitrate=100000)

msg = can.Message(arbitration_id=0xc0ffee,
                  data=[0, 25, 0, 1, 3, 1, 4, 1],
                  is_extended_id=True)

try:
    bus.send(msg)
    print("Message sent on {}".format(bus.channel_info))
except can.CanError:
    print("Message NOT sent")

