all: 
	gcc quadsolver.c normalNum.c verifyInput.c solveQuadratic.c -Wall -pedantic -std=c99 -o quadsolver -lm
use:
	./quadsolver
test:
	quadsolver
	quadsolver <qsin.txt> qsout.txt
	diff qsout.txt qsoutOK.txt
