#!/usr/bin/env python3

# convert from celsius to fahrenheit

lower = 0
upper = 300
step = 20

celsius = lower
while celsius <= upper:
    fahr = (9/5)*(celsius+32)
    print("%3.0f %6.1f" % (celsius, fahr))
    celsius += step
