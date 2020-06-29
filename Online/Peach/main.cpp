#include <stdio.h>

typedef long long ll;

int main() {
    int n;
    ll o = 1;
    scanf("%d",&n);
    for (int i = 1; i < n; ++i) {
        o=(o+1)*2;
    }
    printf("%lld\n",o);
    return 0;
}