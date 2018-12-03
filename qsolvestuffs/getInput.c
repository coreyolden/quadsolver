#include "getInput.h"

int getinputs(coefficients *coefs){
    printf("Please input your values a,b, and c separted by spaces\n");
    double a,b,c;
    char ch;
    int ret;
    char line[100];
    fgets(line, 100, stdin);
    if((ret=sscanf(line, "%lf %lf %lf %c", &a, &b, &c,&ch))!=3){
        printf("You entered bad input\n");
        return 0;
    }
    coefs->a = a;
    coefs->b = b;
    coefs->c = c;
    
    return 1;

}