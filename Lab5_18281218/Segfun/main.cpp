#include <stdio.h>

double SegFun(double x);

int main() {
    double i;

    printf("please input x:");
    scanf("%lf",&i);
    printf("y = %lf", SegFun(i));

    return 0;
}

double SegFun(double x)
{
    double a;

    if(x<1) a = x;
    else if(x >= 1 && x < 10) a = 2*x - 1;
    else a = -3*x - 11;

    return a;
}