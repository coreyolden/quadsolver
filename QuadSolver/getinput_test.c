#include "Asserts.h"
#include "qsolveValidRoots.h"
#include <string.h>
#include <stdio.h>
int getinputsTest(coefficients *coefs, char *vals);

int main(void){
    
    coefficients coef;
    int ret;
    char result[5];
    int resInt;
    FILE *fp;
    char vals[100];
    fp = fopen("input_test.txt","r");
    while(fgets(vals, 100 ,fp)){
        
        fgets(result,10,fp);
        resInt = atoi(result);
        ret = getinputsTest(&coef, vals);
        assert_eq(vals, ret, resInt);
        }
    
    
    return 0;
}

int getinputsTest(coefficients *coefs, char *vals){
    double a, b, c;
    char ch;
    int ret;
    if ((ret = sscanf(vals,"%lf %lf %lf %c", &a, &b, &c,&ch)) != 3)
    {
        return 0;
    }
    coefs->a = a;
    coefs->b = b;
    coefs->c = c;

    return 1;
}
