#include <stdio.h>

void action1(int dArray[],int n);
void action2(int *pInt,int n);

int main() {
    int a[10],flag;
    printf("Please input 10 numbers:");
    for (int i = 0; i < 10; ++i) {
        scanf("%d",&a[i]);
    }
    printf("Which way would you like to use?(0:Array 1:pointer)\n");
    scanf("%d",&flag);
    if (flag) action2(a,10);
    else action1(a,10);
    for (int i = 0; i < 10; ++i) {
        printf("%d ",a[i]);
    }
    return 0;
}

void action1(int dArray[],int n){
    int min = 0,max = 0,temp;
    for (int i = 0; i < n; ++i) {
        if (dArray[i] > dArray[max]) max = i;
        if (dArray[i] < dArray[min]) min = i;
    }
    temp = dArray[max];
    dArray[max] = dArray[n-1];
    dArray[n-1] = temp;
    temp = dArray[min];
    dArray[min] = dArray[0];
    dArray[0] = temp;
}

void action2(int *pInt,int n){
    int min = 0,max = 0,temp;
    for (int i = 0; i < n; ++i) {
        if (pInt[i] > pInt[max]) max = i;
        if (pInt[i] < pInt[min]) min = i;
    }
    temp = pInt[max];
    pInt[max] = pInt[n-1];
    pInt[n-1] = temp;
    temp = pInt[min];
    pInt[min] = pInt[0];
    pInt[0] = temp;
}