CC ?= cc
CFLAGS ?= -O3

all: numsum

numsum: numsum.c main.c
	$(CC) $(CFLAGS) main.c -o numsum

test: test.c numsum.c
	$(CC) $(CFLAGS) -g -Og test.c -o .test
	./.test

.PHONY: all test
