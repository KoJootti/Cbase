SRC=main.c
CC=gcc
CFLAGS=-I. -D__LLIST__ -D__STRUCTS__

default: clean hello run

hello:
	$(CC) $(CFLAGS) main.c -o hello

clean:
	rm -f hello

run:
	./hello
