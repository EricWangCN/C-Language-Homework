#include <stdio.h>
#include <math.h>

void PI_() {
    double PI = 0;
    double I = 1;
    double II = 1;
    double III = 1;
    double a = 0;
    int precision;
    printf("Please set the precision:Level-");
    scanf("%d",&precision);
    for (int i = 0; i < precision; ++i) {
        a++;
        II = 1.0/(2*a-1);
        III = pow(1.0/2,2*a-1);
        PI += I*II*III;
        I *= (2*a-1)/(2.0*a);
    }
    printf("PI=%.100g\n",6*PI);
}