#include "qsolveValidRoots.h"
#include "Asserts.h"
#include <string.h>
#include <stdio.h>
int getinputs(coefficients *coefs, char *vals);

int main(void){
    coefficients coef;
    int ret;
    char *vals = "0 1 2 5 1 2 3";
    ret = getinputs(&coef, vals);
    assert_eq("input validation",ret, 0);

    vals = "0 1 2";
    ret = getinputs(&coef, vals);
    assert_eq("input validation", ret, 1);

    vals = "1";
    ret = getinputs(&coef, vals);
    assert_eq("input validation", ret, 0);
    
    vals = "1 5 3";
    ret = getinputs(&coef, vals);
    assert_eq("input validation", ret, 1);
    
    return 0;
}

int getinputs(coefficients *coefs, char *vals){
    printf("Please input your values a,b, and c separted by spaces\n");
    double a, b, c;
    char ch;
    int ret;
    if ((ret = sscanf(vals,"%lf %lf %lf %c", &a, &b, &c,&ch)) != 3)
    {
        printf("You entered bad input\n");
        return 0;
    }
    coefs->a = a;
    coefs->b = b;
    coefs->c = c;

    return 1;
}
