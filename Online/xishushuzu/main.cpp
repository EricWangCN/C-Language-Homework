#include <stdio.h>

int main() {
    int a[50][50],m,n,c = 0;
    scanf("%d%d",&m,&n);
    int b[50][3] = {m,n};
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d",&a[i][j]);
        }
    }
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (a[i][j]){
                b[++c][0] = i;
                b[c][1] = j;
                b[c][2] = a[i][j];
            }
        }
    }
    b[0][2] = c;
    for (int i = 0; i < c+1; ++i) {
        printf("%d %d %d\n",b[i][0],b[i][1],b[i][2]);
    }
    return 0;
}