#include <math.h>
#include "validinput.h"
#include "qsolveSqrt.h"
typedef struct
{
    double a;
    double b;
    double c;
} coefficients;

typedef struct
{
    double positiveRoot;
    double negativeRoot;
} roots;

int validateRoots(coefficients *coefs, roots *root);