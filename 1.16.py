#!/usr/bin/env python3

# print the longest line and its length

from fileinput import input

length = 0
longest = ""

for line in input():
    if len(line) > length:
        length = len(line)
        longest = line
print("The longest line is %d char:" % length,
        "\n%s" % longest)
