#include <stdio.h>

int main() {
    //(1)
    char C = 'S',*pC = &C;
    int I = 666,*pI = &I;
    float F = 5.21,*pF = &F;
    double D = 2.9,*pD = &D;

    //(2)
    printf("VarName Type Size   Address       Value\n");
    printf("C       char  %2d   %XH    %c\n", sizeof(C),&C,C);
    printf("pC     char*  %2d   %XH    %XH\n", sizeof(pC),&pC,pC);
    printf("I        int  %2d   %XH    %9d\n", sizeof(I),&I,I);
    printf("pI      int*  %2d   %XH    %XH\n", sizeof(pI),&pI,pI);
    printf("F      float  %2d   %XH    %10.2f\n", sizeof(F),&F,F);
    printf("pF    float*  %2d   %XH    %XH\n", sizeof(pF),&pF,pF);
    printf("D     double  %2d   %XH    %10.2lf\n", sizeof(D),&D,D);
    printf("pD   double*  %2d   %XH    %XH\n", sizeof(pD),&pD,pD);

    return 0;
}