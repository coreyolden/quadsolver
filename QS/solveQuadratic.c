#include <math.h>
#include <stdio.h>
#include "quad.h"

void solveQuadratic(double a, double b, double c, double d){

    if (d == 0){
        double root = (-b + sqrt(d)) / (2 * a);
        printf("One root was found was found (-b + √b²-4ac)/2a = %lf\n", root);
    }
    if (d > 0){
        double positiveRoot = (-b + sqrt(d)) / (2 * a);
        double negativeRoot = (-b - sqrt(d)) / (2 * a);
        printf("Two roots were found.\n(-b + √b²-4ac)/2a = %lf\n(-b - √b²-4ac)/2a = %lf\n", positiveRoot, negativeRoot);
    }
}