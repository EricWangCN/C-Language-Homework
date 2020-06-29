#include <stdio.h>
int main() {
    int a,b,c = 1;
    scanf("%d%d",&a,&b);
    for (int i = 0; i < b; ++i) {
        c = ((c*a)%1000);
    }printf("%d\n",c);
    return 0;
}