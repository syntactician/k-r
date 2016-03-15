#!/usr/bin/env python3

# make a heading for a temperature converter

lower = 0
upper = 300
step = 20

print("  F      C")

fahr = lower
while fahr <= upper:
    celsius = (5/9)*(fahr-32)
    print("%3.0f %6.1f" % (fahr, celsius))
    fahr += step
