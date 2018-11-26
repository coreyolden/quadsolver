#include <stdio.h>
#include "quad.h"

int verifyinput(double a, double b, double c, double d){

    int valid = 1;
    if(!a){
        printf("That number is not quadratic because a = 0\n");
        valid = 0;
    }
    if(!normalnumber(a))
        valid=0;
    if (!normalnumber(b))
        valid = 0;
    if (!normalnumber(c))
        valid = 0;
    if(d<0){
    printf("This is not quadratic because b²-4ac < 0\n");
    valid = 0;
    }
    return valid;
}