#include <stdio.h>

void swap(int *a,int *b);

int main() {
    int a,b;
    printf("Please input 2 num you want to swap:");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("is:%d %d",a,b);
    return 0;
}

void swap(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}