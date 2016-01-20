#### Serial Codes ####
# '0' - '9' : Blink led x times
# 'z' : play sound
####              ####

import serial
import sys

def main():
  if len(sys.argv) > 1:
    data = sys.argv[1]
    return send_to_arduino(data)
  else:
    print 'usage: python communicate.py <data>'
    print 'where <data> is sent to the arduino'
    return -1


def send_to_arduino(data):
  ser = serial.Serial('/dev/ttyACM1', 9600, timeout=5)

  # You might want to put a time.sleep(2) here to give
    # the serial connection time to initiate before writing

  return ser.write(data)

if __name__ == '__main__':
  main()