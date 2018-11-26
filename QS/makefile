CC = gcc
CFLAGS = -Wall -pedantic -std=c99
LDFLAGS = -lm

quadsolver : solveQuadratic.o verifyInput.o normalNum.o
	$(CC) $(CFLAGS) quadsolver.c normalNum.c verifyInput.c solveQuadratic.c -o quadsolver $(LDFLAGS)
solveQuadratic.o : solveQuadratic.c quad.h
	$(CC) -c solveQuadratic.c
verifyInput.o : verifyInput.c quad.h
	$(CC) -c verifyInput.c
normalNum.o : normalNum.c quad.h
	$(CC) -c normalNum.c

use:
	./quadsolver
test:
	quadsolver
	quadsolver < qsin.txt > qsout.txt
	diff qsout.txt qsoutOK.txt
clean:
	rm *.o quadsolver