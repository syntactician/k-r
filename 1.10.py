#!/usr/bin/env python3

# cat, replacing some characters with escape codes

from fileinput import input
from sys import stdout

white = 0

for line in input():
    for c in line:
        if c == '\t':
            stdout.write('\\t')
        elif c == '\b':
            stdout.write('\\b')
        elif c == '\\':
            stdout.write('\\\\')
        else:
            stdout.write(c)
