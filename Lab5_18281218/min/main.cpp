#include <stdio.h>

double min(double x,double y,double z);

int main() {
    double a,b,c;

    printf("please input 1st num:");
    scanf("%lf",&a);
    printf("please input 2nd num:");
    scanf("%lf",&b);
    printf("please input 3rd num:");
    scanf("%lf",&c);

    printf("min is:%lf",min(a,b,c));

    return 0;
}

double min(double x,double y,double z)
{
    double m;
    if(x<y) m = x;
    else m = y;

    if(m<y);
    else m = y;

    return m;
}
