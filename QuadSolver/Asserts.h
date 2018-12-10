#include <stdio.h>

#define assert_eq(str,a,b){\
FILE *fp;\
fp = fopen("log.txt","a");\
if( a != b ){\
fprintf(fp, "%s  LINE %d: %s, %d !== %d\n",\
__FILE__ , __LINE__ , str ,  a , b );\
}}
