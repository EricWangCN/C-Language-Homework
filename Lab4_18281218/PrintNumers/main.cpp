#include <stdio.h>
#include <math.h>
void PrintNumbers(int line);
int main() {
    int IN;
    printf("Please input the lines:");
    scanf("%d",&IN);
    PrintNumbers(IN);

    return 0;
}
void PrintNumbers(int line) {
    if(line < 1) printf("Input parameter error!");
    else {
        int a = 0;
        int b = 0;
        for(int i=0;i<line;++i) {
            a = 0;
            b++;
            for(int c=i;c<line;c++) {
                printf("  ");
            }
            for(int j=0;j<b;++j) {
                a++;
                printf("%d ",a);
            }
            for(int k = 1;k<b;++k) {
                a--;
                printf("%d ",a);
            }
            printf("\n");
        }
        b = line;
        for(int i=1;i<line;++i) {
            for(int c=0;c<=i;c++) {
                printf("  ");
            }
            a = 0;
            b--;
            for(int j=0;j<b;++j) {
                a++;

                printf("%d ",a);
            }
            for(int k = 1;k<b;++k) {
                a--;
                printf("%d ",a);
            }
            printf("\n");
        }
    }
}