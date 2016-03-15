#!/usr/bin/env python3

# print histogram of word length of input
# TODO: print vertically

from fileinput import input
from sys import stdout
from numpy import zeros

in_word = False
length  = 0
names = ("1 ", "2 ", "3 ", "4 ", "5 ", "6 ", "7 ", "8 ", "9+")
lengths = zeros(10)
longest = 0

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
            if in_word:
                if length < 9:
                    lengths[length] += 1
                else:
                    lengths[9] += 1
            length = 0
            in_word = False
        else:
            length += 1
            in_word = True
lengths = tuple(lengths[1:10])
histogram(names, lengths)
