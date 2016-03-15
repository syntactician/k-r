#!/usr/bin/env python3

# cat, replacing multiple blanks with a single blank

from fileinput import input
from sys import stdout

white = 0

lc = None

for line in input():
    for c in line:
        if c != ' ':
            stdout.write(c)
        else:
            if c != lc:
                stdout.write(c)
        lc = c
