#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int verifyinput(double a, double b, double c,double d);
void solveQuadratic(double a, double b, double c, double d);


int main(int argc, char *argv[]){
    char *input=malloc(512);
    
    printf("Please provide 3 doubles seperated by spaces\n");
    fgets(input, 500, stdin);
    double a = 0.0, b = 0.0, c = 0.0, d = 0.0;
    
    int ret = sscanf(input,"%lf %lf %lf",&a,&b,&c);
    //while input is not q
        if(ret!=3){
            printf("too few values\n");
            free(input);
        return 0;
        }


        d = (b * b) - (4 * a * c);
         if (verifyinput(a, b, c, d))
            solveQuadratic(a, b, c, d);
        /*
        printf("Please provide 3 doubles seperated by spaces\n");
        fgets(input, 500, stdin);
        double a = 0.0, b = 0.0, c = 0.0, d = 0.0;

        ret = sscanf(input,"%lf %lf %lf",&a,&b,&c)
    
    */}

    free(input);
    return 0;
}

int verifyinput(double a, double b, double c, double d){

    int valid = 1;
    if(!a){
        printf("That number is not quadratic because a =0\n");
        valid = 0;
    }
    if (isnormal(a)==0){
        printf("a is not a valid number\n");
        valid = 0;
    }
    if (isnormal(b)==0){
        printf("b is not a valid number\n");
        valid = 0;
    }
    if (isnormal(c)==0){
        printf("c is not a valid number\n");
        valid = 0;
    }
    if(d<0){
    printf("This is not quadratic because b²-4ac<0\n");
    valid = 0;
    }
    return valid;
}

void solveQuadratic(double a, double b, double c, double d){

    if (d == 0){
        double root = (-b + sqrt(d)) / (2 * a);
        printf("One root was found was found (-b + √b²-4ac)/2a = %lf", root);
    }
    if (d > 0){
        double positiveRoot = (-b + sqrt(d)) / (2 * a);
        double negativeRoot = (-b - sqrt(d)) / (2 * a);
        printf("Two roots were found.\n(-b + √b²-4ac)/2a = %lf\n(-b - √b²-4ac)/2a = %lf\n", positiveRoot, negativeRoot);
    }
}
