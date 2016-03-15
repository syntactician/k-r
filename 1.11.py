#!/usr/bin/env python3

# count lines, words, char

from fileinput import input

in_word = False
nl = nw = nc = 0

for line in input():
    for c in line:
        nc += 1
        if c == '\n':
            nl += 1

        if c in (' ', '\n', '\t'):
            in_word = False
        elif not in_word:
            in_word = True
            nw += 1

print("%d lines, %d words, %d char" % (nl, nw, nc))
