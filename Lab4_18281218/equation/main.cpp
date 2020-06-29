#include <stdio.h>
#include <math.h>
//Programed by WangZilong Date: Oct.10,2018

void root(double a,double b,double c);
int main() {
    double A,B,C;
    printf("ax^2+bx+c=0\n");
    printf("please enter a,b,c in order(a,b,c!=0):");
    scanf("%lf%lf%lf",&A,&B,&C);
    root(A,B,C);

    return 0;
}

void root(double a,double b,double c)
{
    double delta;
    double a1,a2;
    if(a == 0){
        if(b == 0){
            if(c == 0) printf("The equation has infinite solutions.\n");
            else printf("No solution to the equation.\n");
        }
        else{
            a1 = -c/b;
            printf("The equation has a real solution:%lf\n",a1);
        }
    }
    else {
        delta = b * b - 4 * a * c;
        if (delta < 0) {
            printf("The equation has two complex solutions.\n");
            a1 = -b / (2 * a) + sqrt(-delta) / (2 * a);
            a2 = -b / (2 * a) - sqrt(-delta) / (2 * a);
            printf("a1 = %lf+", -b / (2 * a));
            printf("%lfi\n", sqrt(-delta) / (2 * a));
            printf("a2 = %lf-", -b / (2 * a));
            printf("%lfi\n", sqrt(-delta) / (2 * a));
        } else if (delta == 0) {
            printf("The equation has two equal real solutions.\n");
            a1 = -b / (2 * a) + sqrt(delta) / (2 * a);
            printf("a1 = a2 = %lf\n", a1);
        } else {
            printf("The equation has two unequal real solutions.\n");
            a1 = -b / (2 * a) + sqrt(delta) / (2 * a);
            a2 = -b / (2 * a) - sqrt(delta) / (2 * a);
            printf("a1 = %lf\n", a1);
            printf("a2 = %lf\n", a2);
        }
    }
}