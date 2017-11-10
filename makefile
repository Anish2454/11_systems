all: 11.c
	gcc -g -o parse_args 11.c

run: all
	./parse_args
