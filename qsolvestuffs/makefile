CFLAGS = -Wall -pedantic -std=c99
CC = gcc
LIBS= -lm
SHELL = /bin/bash
SRC = getinput.c qsolveSqrt.c qsolveValidRoots.c quadmain.c validinput.c qsolvemain.c

qsolve: quadmain.o getInput.o qsolveValidRoots.o validinput.o qsolveSqrt.o
	${CC} -o qsolve quadmain.o getInput.o validinput.o qsolveSqrt.o qsolveValidRoots.o ${LIBS}

getValidRoots_test: qsolveValidRoots.o qsolveSqrt.o validinput.o
	${CC} -o getValidRoots getValidRoots_test.o qsolveValidRoots.o qsolveSqrt.o validinput.o ${LIBS}

getInput.o: getInput.h
getinput_test.o: qsolveValidRoots.h Asserts.h
validinput.o: validinput.h
qsolveSqrt.o: qsolveSqrt.h
qsolveValidRoots.o: qsolveValidRoots.h validinput.h qsolveSqrt.h
getValidRoots_test.o:qsolveValidRoots.h validinput.h qsolveSqrt.h
quadmain.o: quadmain.h qsolveValidRoots.h getInput.h

clean:
	rm *.o getinput_test getValidRoots qsolve qsolvemain quadratic
