#!/usr/bin/env python3

# reverse tho order of the printed conversions

lower = 0
upper = 300
step = 20

fahr = upper
while fahr >= lower:
    celsius = (5/9)*(fahr-32)
    print("%3.0f %6.1f" % (fahr, celsius))
    fahr -= step
