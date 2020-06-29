#include <stdio.h>
int main() {
    int I,II;
    printf("请输入第一个数字：");
    scanf("%d",&I);
    printf("请输入第二个数字：");
    scanf("%d",&II);

    int value = I + II;
    printf("结果是：%d\n",value);
    return 0;
}
