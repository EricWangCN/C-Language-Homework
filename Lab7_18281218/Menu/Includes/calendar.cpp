#include <stdio.h>

int CalculateWeekDay(int y, int m);

void Calendar() {
    int y,m,d;
    int a[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    scanf("%d%d",&y,&m);
    if(((y%400==0)||(y%100!=0&&y%4==0))) a[1] = 29;
    d = CalculateWeekDay(y,m);
    for (int i = 0; i < d ; i++) {
        printf("   ");
    }
    for (int i = 0; i < a[m-1]; i++)
    {
        printf("%2d",i+1);
        if ((d+1)%7) printf(" ");
        else printf("\n");
        d++;
    }
}

int CalculateWeekDay(int y, int m) {
    int d = 1;
    if (m == 1 || m == 2) m += 12, y--;
    int iWeek = (d + 2 * m + 3 * (m + 1) / 5 + y + y / 4 - y / 100 + y / 400) % 7;
    switch (iWeek) {
        case 0:
            return 1;
            break;
        case 1:
            return 2;
            break;
        case 2:
            return 3;
            break;
        case 3:
            return 4;
            break;
        case 4:
            return 5;
            break;
        case 5:
            return 6;
            break;
        case 6:
            return 0;
            break;
    }
}
