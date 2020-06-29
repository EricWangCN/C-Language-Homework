#include <stdio.h>

#include <math.h>

int main() {
    double a,b,c;
    a = 5 * (0x10 + 12 / 3) - 012 + 0x2F;
    b = sin(30 * 3.14159 / 180) - (int)cos(60 * 3.14159 / 180);
    c = log(pow('z' - 'a' + 1, 2)) + log10(pow(10,3));

    printf("5 * (0x10 + 12 / 3) - 012 + 0x2F = %lf\n",a);
    printf("in(30 * 3.14159 / 180) - (int)cos(60 * 3.14159 / 180) = %lf\n",b);
    printf("log(pow('z' - 'a' + 1, 2)) + log10(pow(10,3)) = %lf\n",c);
    return 0;
}