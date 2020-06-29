#include <stdio.h>

int main() {
    int flag[100][100] = {1},line;
    printf("How many lines would you like to print?\n");
    scanf("%d",&line);
    for (int i = 1; i < line; ++i) {
        for (int j = 0; j < i+1; ++j) {
            if (j == 0 || j == i){
                flag[i][j] = 1;
            } else {
                flag[i][j] = flag[i-1][j-1] + flag[i-1][j];
            }
        }
    }
    for (int k = 0; k < line; ++k) {
        int i = 0;
        while (flag[k][i]!=0){
            printf("%d ",flag[k][i]);
            i++;
        }
        printf("\n");
    }
    return 0;
}