#include <stdio.h>
int main() {
    int y,m,d,dd = 0;
    int da[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    scanf("%d%d%d",&y,&m,&d);
    if(((y%400==0)||(y%100!=0&&y%4==0))) da[1] = 29;
    if(d>da[m-1]) printf("data error!\n");
    else{
        for(int i=0;i<m-1;i++) dd += da[i];
        dd += d;
        printf("%d\n",dd);
    }
    return 0;
}