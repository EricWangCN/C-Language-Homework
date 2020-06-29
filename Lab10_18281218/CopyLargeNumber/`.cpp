#include <stdio.h>
#include <mm_malloc.h>

int select1(double a[],double b[],int n,int x);
int select2(double *a ,double *b ,int n,int x);

int main() {
    int n,x,j,flag;

    printf("Please input the size of the array:");
    scanf("%d",&n);
    printf("Please set \"x\"(the limit):");
    scanf("%d",&x);

    double *a = (double*)malloc(n* sizeof(double));
    double *b = (double*)malloc(n* sizeof(double));

    printf("Please input Array b[]:");
    for (int i = 0; i < n; ++i) {
        scanf("%lf",&b[i]);
    }
    printf("Please set MODE(0:Array 1:Pointer):");
    scanf("%d",&flag);

    if (!flag) j = select1(a,b,n,x);
    else j = select2(a,b,n,x);

    for (int i = 0; i < j; ++i) {
        printf("%lf ",a[i]);
    }

    free(a);
    free(b);

    return 0;
}

int select1(double a[],double b[],int n,int x){
    int j = -1;
    for (int i = 0; i < n; ++i) {
        if(b[i] > x) a[++j] = b[i];
    }
    return j+1;
}

int select2(double *a ,double *b ,int n,int x){
    int j = -1;
    for (int i = 0; i < n; ++i) {
        if(b[i] > x) a[++j] = b[i];
    }
    return j+1;
}