#include "validinput.h"
#include "qsolveValidRoots.h"

int validateRoots(coefficients *coefs, roots *root){
    double a = coefs->a;
    double b = coefs->b;
    double c = coefs->c;
    if(a == 0){
        printf("a cannot be 0\n");
        return 0;
    }
    if (validDouble(a) != 1)
        return 0;
    if (validDouble(b) != 1)
        return 0;
    if (validDouble(c) != 1)
        return 0;
    
    double d = (b * b) - (4 * a * c);

    if(d<0){
        printf("d is less than 0\n");
        return 0;
    }
    
    double sqrtd = getsqrt(d);
    if(sqrtd<0){
        printf("the square root of d is less than 0\n");
        return 0;
    }
    
    if(d==0){
        root->positiveRoot = (-b + sqrtd) / (2 * a);
        return 1;
    }

    if(d>0){
        root->positiveRoot = (-b + sqrtd) / (2 * a);
        root->negativeRoot = (-b - sqrtd) / (2 * a);
        return 2;
    }

    return -1;
}
