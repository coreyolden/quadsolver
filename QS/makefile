all: 
  gcc quadsolver.c -Wall -std=c99 *.o quadsolver
use:
  ./quadsolver
test:
  quadsolver
  quadsolver <qsin.txt> qsout.txt
  diff qsout.txt qsoutOK.txt
