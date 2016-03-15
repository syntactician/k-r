#!/usr/bin/env python3

# cat, one word per line

from fileinput import input
from sys import stdout

in_word = False

for line in input():
    for c in line:
        if c in (' ', '\t', '\n'):
            if in_word:
                stdout.write('\n')
            in_word = False
        else:
            stdout.write(c)
            in_word = True
