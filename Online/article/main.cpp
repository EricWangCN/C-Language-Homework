#include <stdio.h>
char a[3][81];
int main() {
    int b[5] = {0};
    for (int i = 0; i < 3; ++i) gets(a[i]);
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 80; ++j) {
            if (a[i][j]>='A'&&a[i][j]<='Z') b[0] ++;
            else if (a[i][j]>='a'&&a[i][j]<='z') b[1] ++;
            else if (a[i][j]>='0'&&a[i][j]<='9') b[2] ++;
            else if (a[i][j] == ' ') b[3] ++;
            else b[4] ++;
        }
    }
    for (int i = 0; i < 5; ++i) {
        printf("%d\n",b[i]);
    }
    return 0;
}