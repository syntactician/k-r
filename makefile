CC=c99
# CFLAGS= -std=c99 -pedantic
EXERCISES=1.1 1.2 1.3 1.4 1.5 1.6 1.7 1.8 1.9 1.10 1.12 1.13 1.14 1.15 1.16 1.17 1.19

all: $(EXERCISES) tmp

clean:
	@rm -rf $(EXERCISES) tmp a.out *.dSYM
