CC = gcc

all:
	cc main.c -o game -lraylib
clean: 
	rm -f game
