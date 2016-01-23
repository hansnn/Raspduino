import serial
import sys
import time

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

  # Give the serial connection a couple of seconds to initiate
  time.sleep(2)

  return ser.write(data)

if __name__ == '__main__':
  main()
