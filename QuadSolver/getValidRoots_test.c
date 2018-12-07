#include "qsolveValidRoots.h"
#include "Asserts.h"

int main(void){

    coefficients coefs;
    roots roots;
    coefs.a = 0;
    coefs.b = 2;
    coefs.c = 1;
	int ret = validateRoots(&coefs, &roots);
//	assert_eq("validate roots", ret, );

    coefs.a = 5;
    coefs.b = 9;
    coefs.c = 9;
	ret = validateRoots(&coefs, &roots);
//	assert_eq("validate roots", ret, );
    
    coefs.a = 8;
    coefs.b = 0;
    coefs.c = 1;
	ret = validateRoots(&coefs, &roots);
//	assert_eq("validate roots", ret, );

    return 0;
}
