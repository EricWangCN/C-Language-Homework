#include <stdio.h>

int main(void) {
    //Scanfs
    int a,b;
    float x,y,z;
    char c1,c2;
    printf("请输入a:");
    scanf("%d",&a);
    printf("请输入b:");
    scanf("%d",&b);
    printf("请输入c1:");
    scanf("\n%c",&c1);
    printf("请输入c2:");
    scanf("\n%c",&c2);
    printf("请输入x:");
    scanf("%f",&x);
    printf("请输入y:");
    scanf("%f",&y);
    printf("请输入z:");
    scanf("%f",&z);

    //Prints
    printf("a = %d\n",a);
    printf("b = %d\n",b);
    printf("c1 = %c\n",c1);
    printf("c2 = %c\n",c2);
    printf("x = %f\n",x);
    printf("y = %f\n",y);
    printf("z = %f\n",z);

    return 0;
}