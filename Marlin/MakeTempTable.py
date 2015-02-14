#!/usr/bin/python
#
# Creates a C code lookup table for doing ADC to temperature conversion
# on a microcontroller
# based on: http://hydraraptor.blogspot.com/2007/10/measuring-temperature-easy-way.html
"""Thermistor Value Lookup Table Generator

Generates lookup to temperature values for use in Marlin the using Steinhart Hart equations and three t/r pairs: 
The coeficients are calulated using the spreadsheet equations here: http://assets.newport.com/webDocuments-EN/images/AN04_Thermistor_Calibration_IX.PDF

http://hydraraptor.blogspot.com/2007/10/measuring-temperature-easy-way.html

Usage: python makeTempTable.py [options]

Options:
  -h, --help        show this help
  --t0=...          thermistor temp rating where # is the temperature in Celsuis to get r0 (from your datasheet)
  --r0=...          thermistor rating where # is the ohm rating of the thermistor at t0 (eg: 100K = 100000)
  --t1=...          actual temperature reading at first known ADC value
  --adc1=...        ADC reading at measured temperature t1
  --r1=...          resistance at t1 if adc1 not known
  --t2=...          actual temperature reading at second known ADC value
  --adc2=...        ADC reading at measured temperature t2
  --r2=...          resistance at t2 if adc2 not known
  --rp=...          Pullup up resistor value, e.g. 4700
  """

def usage():
    print __doc__

from math import *
import sys
import getopt


def main(argv):
    def adc(r):
        return 1023.0 * r / (r + rp)
        
    def resistance(adc):
        return adc * rp / (1023.0 - adc)
        
    r0 = 100000
    t0 = 25
    rp = 4700

    t1 = 209; r1 = resistance(94)
    t2 = 256; r2 = resistance(42)


    try:
        opts, args = getopt.getopt(argv, "h", ["help", "r0=", "t0=", "t1=", "adc1=", "r1=", "t2=", "adc2=", "r2=", "rp="])
    except getopt.GetoptError:
        usage()
        sys.exit(2)
        
    for opt, arg in opts:
        if opt in ("-h", "--help"):
            usage()
            sys.exit()
        elif opt == "--r0":
            r0 = int(arg)
        elif opt == "--t0":
            t0 = int(arg)
        elif opt == "--t1":
            t1 = int(arg)
        elif opt == "--t2":
            t2 = int(arg)
        elif opt == "--r1":
            r1 = int(arg)
        elif opt == "--r2":
            r2 = int(arg)
        elif opt == "--adc1":
            r1 = resistance(int(arg))
        elif opt == "--adc2":
            r2 = resistance(int(arg))
        elif opt == "--rp":
            rp = int(arg)

    T0 = t0 + 273.15;   T1 = t1 + 273.15;   T2 = t2 + 273.15
    a0 = log(r0);       a1 = log(r1);       a2 = log(r2)
    z = a0 - a1
    y = a0 - a2
    x = 1 / T0 - 1 / T1
    w = 1 / T0 - 1 / T2
    v = a0 ** 3 - a1 ** 3
    u = a0 ** 3 - a2 ** 3
    
    C = (x - z * w / y) / (v - z * u / y)
    B = (x - C * v) / z
    A = 1 / T0 - C * a0 ** 3 - B * a0
    
    for t in range(300, -5, -5):
        T = t + 273.15
        y = (A - 1/T) / C
        x = ((B / (3 * C)) ** 3 + (y ** 2) / 4) ** 0.5
        r = exp((x - y / 2) ** (1.0/3) - (x + y / 2) ** (1.0/3))
        print "    {   %5d,       %3d     }, // r=%6d adc=%4.2f" % (int(round(adc(r) * 16)), t, int(round(r)), adc(r))

if __name__ == "__main__":
    main(sys.argv[1:])
