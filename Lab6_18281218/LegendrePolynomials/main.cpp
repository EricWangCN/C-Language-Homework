#include <stdio.h>
#include <math.h>

double Calculate(int N,int x);

int main() {
    int n,x;

    printf("please input the numbers of items: ");
    scanf("%d",&n);
    printf("please input x: ");
    scanf("%d",&x);

    printf("Result is: %lf",Calculate(n,x));

    return 0;
}

double Calculate(int N,int x)
{
    if(!N) return 0;
    else if(N == 1) return x;
    else return ((2*N-1)*x*Calculate(N-1,x)-(N-1)*Calculate(N-2,x))/N;
}