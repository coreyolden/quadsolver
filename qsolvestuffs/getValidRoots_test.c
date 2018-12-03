#include "qsolveValidRoots.h"

int main(void){

    coefficients coefs;
    roots roots;
    coefs.a = 0;
    coefs.b = 2;
    coefs.c = 1;
    int ret = validateRoots(&coefs, &roots);

    return 0;
}