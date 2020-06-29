#include <stdio.h>
int main() {
    long long a,b = 1;
    scanf("%d",&a);
    for (int i = 1; i <= a; ++i) {
        b*=i;
    }
    printf("%lld\n",b);
    return 0;
}