#include <stdio.h>

int gcd(int m,int n);

int main() {
    int a,b;

    printf("please input 1st num&2nd num: ");
    scanf("%d%d",&a,&b);

    printf("%d\n",gcd(a,b));

    return 0;
}

int gcd(int m,int n)
{
    while(m != n)
    {
        if(m < n)
        {
            int t;
            t = m;
            m = n;
            n = t;
        }
        else m = m -n;
    }
    return m;
}