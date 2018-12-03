

CFLAGS = -Wall -pedantic -std=c99
CC = gcc
LIBS= -lm
SRC = makefile getinput.c getinput.h qsolveSqrt.c qsolveSqrt.h qsolveValidateRoots.h qsolveValidRoots.c quadmain.h quadmain.c validinput.h validinput.c qsolvemain.c

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
