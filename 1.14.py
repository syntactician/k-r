#!/usr/bin/env python3

# print histogram of character types in input
# TODO: print vertically

from fileinput import input
from sys import stdout
from numpy import zeros

freqs = zeros(4)
types = ("white", "alpha", "digit", "other")

def histogram( names, freqs ) :
    most_freq = 0
    i = 0
    while i < len(freqs):
        if freqs[i] > most_freq:
            most_freq = freqs[i]
        i += 1
    i = 0
    while i < len(names):
        stdout.write(names[i])
        stdout.write(' ')
        n = 0
        while n < freqs[i]:
            stdout.write('-')
            n += pow(most_freq, 2) / (25 * freqs[i])
        stdout.write('\n')
        i += 1
    return


for line in input():
    for c in line:
        if c in (' ', '\t', '\n'):
            freqs[0] += 1
        elif c.isalpha():
            freqs[1] += 1
        elif c.isalnum():
            freqs[2] += 1
        else:
            freqs[3] += 1
histogram(types, freqs)
