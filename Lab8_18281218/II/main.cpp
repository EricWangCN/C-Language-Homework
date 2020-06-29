#include <stdio.h>
#include <mm_malloc.h>

void BlockExchange(int nArray [], int n, int m);

int main() {
    int n,m,*a = (int*)malloc(n* sizeof(int));
    printf("Please input n,m in order:");
    scanf("%d%d",&n,&m);
    printf("Please input the 1st num to the last num:");
    for (int i = 1; i <= n; ++i) {
        scanf("%d",&a[i]);
    }
    BlockExchange(a,n,m);
    for (int j = 1; j <= n; ++j) {
        printf("%d ",a[j]);
    }
    return 0;
}

void BlockExchange(int nArray [], int n, int m){
    for (int i = 1; i <= m; ++i) {
        int temp = nArray[i];
        nArray[i] = nArray[n-m+i];
        nArray[n-m+i] = temp;
    }
}