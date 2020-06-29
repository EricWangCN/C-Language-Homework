#include <stdio.h>
int main() {
    double m;
    int n;
    scanf("%d %lf",&n,&m);
    for (double i = n; i > 1; --i) {
        m = (m+1.0/i)/((i-1.0)/i);
    }
    printf("%.2lf\n",m);
    return 0;
}