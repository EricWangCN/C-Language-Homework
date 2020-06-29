#include <stdio.h>
#include <math.h>

double a,b,c,d;

double F(double x);
double F2(double x);
double Newton(double x);

int main() {
    scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
    printf("%lf",Newton(1));
    return 0;
}

double F(double x) {
    return a*pow(x,3)+b*x*x+c*x+d;
}

double F2(double x){
    return 3*a*x*x+2*b*x+c;
}

double Newton(double x) {
    while(fabs(F(x))>10e-5)
    {
        x = x - F(x)/F2(x);
    }
    return x;
}
