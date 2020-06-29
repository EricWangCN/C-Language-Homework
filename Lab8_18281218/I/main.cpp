#include <stdio.h>
#include <mm_malloc.h>
#include <math.h>

double polyfunc(double dArray[], int item, double x);

int main() {
    int a;
    printf("Please set the items:");
    scanf("%d",&a);
    printf("Please input a0~an in order(y = a0  + a1 * x^1 + a2 * x^2 + … + an * x^n):\n");
    double *array,x;
    array = (double*)malloc(a*sizeof(double));
    for (int i = 0; i <= a; ++i) {
        scanf("%lf",&array[i]);
    }
    printf("Please set the X:");
    scanf("%lf",&x);
    printf("%lf",polyfunc(array,a,x));
}

double polyfunc(double dArray[], int item, double x){
    double a;
    for (int i = 0; i <= item; ++i) {
        a+= dArray[i]*pow(x,i);
    }
    return a;
}