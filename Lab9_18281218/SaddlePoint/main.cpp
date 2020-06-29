#include <stdio.h>

int main() {
    int a[1000][1000],line,row;
    printf("Please input the lines of this matrix:");
    scanf("%d",&line);
    printf("Please input the rows of this matrix:");
    scanf("%d",&row);
    for (int i = 0; i < line; ++i) {
        printf("please input the line%d number:",i+1);
        for (int j = 0; j < row; ++j) {
            scanf("%d",&a[i][j]);
        }
    }
    for (int i = 0; i < line; ++i) {
        int m = 0,max = 0;
        for (int j = 0; j < row; ++j) {
            if (a[i][j] > a[i][max]) max = j;
        }
        for (int k = 0; k < line; ++k) {
            if (a[i][max] > a[k][max]) m = 1;
        }
        if (!m) {
            printf("(%d,%d)=%d is a saddle point\n",i+1,max+1,a[i][max]);
            return 0;
        }
    }
    printf("No saddle point!\n");
    return 0;
}