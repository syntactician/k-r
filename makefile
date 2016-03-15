# CC=c99
CC=gcc
CFLAGS= -std=c99 -pedantic -Wall
EXERCISES=1.01 1.02 1.03 1.04 1.05 1.06 1.07 1.08 1.09 1.10 \
		  1.12 1.13 1.14 1.15 1.16 1.17 1.19 \
		  2.2

all: $(EXERCISES) tmp

clean:
	@rm -rf $(EXERCISES) tmp a.out *.dSYM
