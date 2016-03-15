#!/usr/bin/env python3

# count blanks, tabs, whitespace

from fileinput import input

white = 0

for line in input():
    for c in line:
        if c in (' ', '\t', '\n'):
            white += 1

print(white)
