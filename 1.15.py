#!/usr/bin/env python3

# rewrite the temperature converter with a function

lower = 0
upper = 300
step = 20

def to_fahr(cels):
    return (9/5)*(cels+32)

def to_cels(fahr):
    return (5/9)*(fahr-32)

fahr = lower
while fahr <= upper:
    print("%3.0f %6.1f" % (fahr, to_cels(fahr)))
    fahr += step
