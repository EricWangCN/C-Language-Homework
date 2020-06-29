#include <stdio.h>
int main() {
    int I,II;
    printf("请输入第一个数字：");
    scanf("%d",&I);
    printf("请输入第二个数字：");
    scanf("%d",&II);

    if(I >= II){
        printf("较大的数是：%d",I);
    }
    else printf("较大的数是：%d",II);
    return 0;
}
