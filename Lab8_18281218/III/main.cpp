#include <stdio.h>

void sort(int nArray[]);

int main() {
    int a[11];
    printf("Please input the 1st num to the 10th num in order:\n");
    scanf("%d%d%d%d%d%d%d%d%d%d",&a[1],&a[2],&a[3],&a[4],&a[5],&a[6],&a[7],&a[8],&a[9],&a[10]);
    sort(a);
    printf("is:");
    for (int i = 1; i <= 10; ++i) {
        printf("%d ",a[i]);
    }
    return 0;
}

void sort(int nArray[]){
    for (int i = 1; i < 8; ++i) {
        int temp = 0,max = i;
        for (int j = i; j <= 8; ++j) {
            if (nArray[j] > nArray[max]) max = j;
        }
        temp = nArray[i];
        nArray[i] = nArray[max];
        nArray[max] = temp;
    }
}