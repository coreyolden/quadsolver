#include <stdio.h>
#include <math.h>
#include "quad.h"

int normalnumber(double num){
    int valid = 1;
    if (isnan(num))
    {
        printf("num is not a valid number\n");
        valid = 0;
    }
    if (isinf(num))
    {
        printf("num is not a valid number\n");
        valid = 0;
    }
    return valid;
}