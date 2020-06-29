#include <stdio.h>

#define PI 3.1415926535

double volume(double radius);
double SurfaceArea(double radius);

int main() {
    double r;

    printf("please input the radius:");
    scanf("%lf",&r);

    printf("volume is:%lf\n",volume(r));
    printf("Surface is:%lf\n",SurfaceArea(r));

    return 0;
}

double volume(double radius)
{
    double v;
    v = 4/3 * PI * radius * radius * radius;

    return v;
}

double SurfaceArea(double radius)
{
    double s;
    s = 4 * PI * radius * radius;

    return s;
}