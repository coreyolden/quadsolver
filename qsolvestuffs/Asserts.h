#include <stdio.h>
#define assert_eq(str,a,b) {\
  if( a != b ) { \
    fprintf(stderr, "%s  LINE %d: %s, %d !== %d\n", \
              __FILE__ , __LINE__ , str ,  a , b ); \
  } \
}