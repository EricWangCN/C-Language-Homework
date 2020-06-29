#include <stdio.h>

#include "./Includes/Define.h"

int main() {
    int select = 0;
    char yn;
    printf("Welcome use Wangzilong's Functions!\n");
    printf("Just choose the function you want to use:\n");
    printf("1.Calculator(operator num1 num2):\n");
    printf("2.Check Calendar(YEAR MONTH):\n");
    printf("3.Solve a equaltion(ax^2+bx+c=0):\n");
    printf("4.Gain GCD:\n");
    printf("5.Is a year a leapyear?:\n");
    printf("6.Use NewtonLteration:\n");
    printf("7.To calculate π:\n");
    printf("8.Calculate QuadrilateralArea:\n");
    again:
    printf("Select a function:");
    scanf("%d",&select);
    printf("The function you choose was:");
    switch (select)
    {
        case 1:printf("Calculator");
            break;
        case 2:printf("Check Calendar");
            break;
        case 3:printf("Solve a equaltion");
            break;
        case 4:printf("Gain GCD");
            break;
        case 5:printf("Is a year a leapyear?");
            break;
        case 6:printf("Use NewtonLteration");
            break;
        case 7:printf("To calculate π");
            break;
        case 8:printf("Calculate QuadrilateralArea");
            break;
        default:
            printf("Error 0:Wrong number input!\n");
            goto again;
    }
    printf("\n");
    y:
    printf("y/n?:");
    scanf("\n%c",&yn);
    if(yn == 'n') goto again;
    if(yn != 'y') goto y;
    switch (select)
    {
        case 1:calculator();
            break;
        case 2:Calendar();
            break;
        case 3:equal();
            break;
        case 4:GCD();
            break;
        case 5:leapyear();
            break;
        case 6:NewtonLteration();
            break;
        case 7:PI_();
            break;
        case 8:QuadrilateralArea();
            break;
        default:
            printf("Error 0:Wrong number input!\n");
            break;
    }
    return 0;
}