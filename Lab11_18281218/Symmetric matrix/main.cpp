#include <stdio.h>

int fun(int a[100][100],int n);
int fun_(int a[100][100],int n);//Pointer

int main() {
    int a[100][100],n;
    printf("Please set how many lines and rows in you matrix:");
    scanf("%d",&n);
    printf("Please input the matrix:\n");
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d",&a[i][j]);
        }
    }
    printf("(1)%d\n",fun(a,n));
    printf("(2)%d\n",fun_(a,n));

    return 0;
}

int fun(int a[100][100],int n){
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if(a[i][j]-a[j][i]) return 0;
        }
    }
    return 1;
}

int fun_(int a[100][100],int n) {
    int *b = &a[0][0];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (*(b+i*100+j) - *(b+100*j+i)) return 0;
        }
    }
    return 1;
}