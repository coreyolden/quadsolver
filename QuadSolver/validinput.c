
#include "validinput.h"
int validDouble(float num){
    int valid = 1;
    if (isnan(num))
    {
        printf("%lf is not a valid number\n",num);
        valid = 0;
    }
    if (isinf(num))
    {
        printf("%lf is not a valid number\n",num);
        valid = 0;
    }
    return valid;
}
