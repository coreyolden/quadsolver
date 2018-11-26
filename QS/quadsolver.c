#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "quad.h"

int main(int argc, char *argv[]){
    char *input=malloc(512);
    
    printf("Please provide 3 doubles seperated by spaces\n");
    fgets(input, 500, stdin);
    double a = 0.0, b = 0.0, c = 0.0, d = 0.0;
    
    int ret = sscanf(input,"%lf %lf %lf",&a,&b,&c);
    
    if(ret!=3){
        printf("too few values\n");
        free(input);
    return 0;
    }
    
    
    d = (b * b) - (4 * a * c);
     if (verifyinput(a, b, c, d))
        solveQuadratic(a, b, c, d);


    free(input);
    return 0;
}