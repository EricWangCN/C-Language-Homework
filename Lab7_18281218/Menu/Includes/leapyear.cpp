#include <stdio.h>

void leapyear() {
    int year;
    printf("请输入需要判断的年份：");
    scanf("%d",&year);
    if((year%400==0)||(year%100!=0&&year%4==0)){
        printf("%d年是闰年。\n",year);
    }
    else{
        printf("%d年不是闰年。\n",year);
    }
}