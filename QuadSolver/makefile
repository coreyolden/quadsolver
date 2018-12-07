CFLAGS = -Wall -pedantic -std=c99
CC = gcc
LIBS= -lm
SHELL = /bin/bash
SRC = getInput.c qsolveSqrt.c qsolveValidRoots.c quadmain.c validinput.c getValidRoots_test.c validinput_test.c getinput_test.c

all: qsolve getValidRoots_test getinput_test validinput_test

qsolve: quadmain.o getInput.o qsolveValidRoots.o validinput.o qsolveSqrt.o
	${CC} -o qsolve quadmain.o getInput.o validinput.o qsolveSqrt.o qsolveValidRoots.o ${LIBS}

getValidRoots_test: getValidRoots_test.o qsolveValidRoots.o qsolveSqrt.o validinput.o
	${CC} -o getValidRoots_test getValidRoots_test.o qsolveValidRoots.o qsolveSqrt.o validinput.o ${LIBS}

getinput_test: getinput_test.o getInput.o qsolveValidRoots.o validinput.o qsolveSqrt.o
	${CC} -o getinput_test getinput_test.o getInput.o qsolveValidRoots.o qsolveSqrt.o validinput.o ${LIBS}

validinput_test: validinput_test.o validinput.o

getInput.o: getInput.h
getinput_test.o: qsolveValidRoots.h Asserts.h getInput.h
validinput.o: validinput.h
validinput_test.o : validinput.h Asserts.h
qsolveSqrt.o: qsolveSqrt.h
qsolveValidRoots.o: qsolveValidRoots.h validinput.h qsolveSqrt.h
getValidRoots_test.o: qsolveValidRoots.h
quadmain.o: quadmain.h qsolveValidRoots.h getInput.h

run:
	./qsolve

test:
	./getValidRoots_test
	./getinput_test
	./validinput_test

clean:
	rm *.o getinput_test getValidRoots_test qsolve validinput_test QuadSolver.tar

deploy:
	tar -zcvf QuadSolver.tar ${SRC} *.h README makefile
