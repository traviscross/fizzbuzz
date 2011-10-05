# makefile

.PHONY: all clean

all: fizzbuzz

fizzbuzz: fizzbuzz.c
	gcc -o $@ $<

clean:
	rm -rf *.o fizzbuzz

