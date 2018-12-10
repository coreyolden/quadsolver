#include "qsolveValidRoots.h"
#include "Asserts.h"

int main(void){

    coefficients coefs;
    roots roots;
    char line[105];
    char toss;
    int ret;
    
    int retInt;
    FILE *fp;
    fp = fopen("getValidRoots_test.txt","r");
    while(fgets(line,100,fp)){
        sscanf(line,"%lf %lf %lf %d %c",&coefs.a, &coefs.b, &coefs.c, &retInt, &toss);
        ret = validateRoots(&coefs, &roots);
        if(ret == 2)
        ret = 1;
        assert_eq(line, ret, retInt);
    }
    
	

    return 0;
}
