# makefile

.PHONY: all clean

all: fizzbuzz

fizzbuzz: fizzbuzz.c
	gcc -Wall -o $@ $<

clean:
	rm -rf *.o fizzbuzz

