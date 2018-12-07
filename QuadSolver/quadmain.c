#include "quadmain.h"
int main(){
    printf("This is a basic quad solver program you will input 3 a,b,c in a string and it will use them to solve the quadratic equation\n");
    coefficients coef;
    roots rts;
    int validinput = 1;
    while(validinput){
        if (getinputs(&coef)==1){
            int validated = validateRoots(&coef, &rts);
             if (validated == 1)
            {
                printf("One root was found was found (-b + √b²-4ac)/2a = %lf", rts.positiveRoot);
                validinput = 0;
            }
            else if (validated == 2){
                printf("Two roots were found.\n(-b + √b²-4ac)/2a = %lf\n(-b - √b²-4ac)/2a = %lf\n", rts.positiveRoot, rts.negativeRoot);
                validinput = 0;
            }
        }        
    }
    
    
  return 0;  
    
}