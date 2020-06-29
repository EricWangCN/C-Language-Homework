#include <stdio.h>
#include <math.h>

#define PI 3.1415926535

double AngleToRadian(double Angle);

void QuadrilateralArea()
{
    double alpha,a,b,c,d,s,S;

    printf("Please input sum of two diagonals:");
    scanf("%lf",&alpha);
    printf("Please input a:");
    scanf("%lf",&a);
    printf("Please input b:");
    scanf("%lf",&b);
    printf("Please input c:");
    scanf("%lf",&c);
    printf("Please input d:");
    scanf("%lf",&d);

    alpha = AngleToRadian(alpha);
    s = (a+b+c+d)/2;
    S = sqrt((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*pow(cos(alpha/2),2));
    printf("area is:%lf",S);
}

double AngleToRadian(double Angle)
{
    double Radian;
    Radian = (Angle/180)*PI;

    return Radian;
}