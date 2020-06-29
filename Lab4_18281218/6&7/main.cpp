#include <stdio.h>
void ALL();
void OR();

int main() {
    ALL();
    OR();
    return 0;
}

void ALL()
{
    int a=0;
    for(int i = 0; i<=100 ; ++i)
    {
        a++;
        if(a%6==0||a%7==0)
        {
            printf("%d ",a);
        }
    }
    printf("\n");
}

void OR()
{
    int a=0;
    for(int i = 0; i<=100 ; ++i)
    {
        a++;
        if((a%6==0||a%7==0)&&!(a%6==0&&a%7==0))
        {
            printf("%d ",a);
        }
    }
    printf("\n");
}