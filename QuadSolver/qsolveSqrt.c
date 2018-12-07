/* Values will be fed in here and it'll return the square root.

*/

#include "qsolveSqrt.h"

double getsqrt(double value)
{
    if (value < 0)
        return 0;
    return sqrt(value);
}