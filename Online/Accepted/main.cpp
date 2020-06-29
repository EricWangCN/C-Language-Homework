#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

typedef long long ll;
typedef long l;

int main(int argc,char *argv[]) {
    char a[1000000];
    ll P_num,D_num,Group[1000000][2],Out[1000000] = {0};
    scanf("%lld%lld%s",&P_num,&D_num,a);

    for (ll i = 0; i < D_num; ++i) {
        scanf("%lld%lld",&Group[i][0],&Group[i][1]);
        for (ll j = Group[i][0]-1; j < Group[i][1]; ++j) {
            if (a[j] == 'A') {
                Out[i] ++;
                a[j] = 'W';
            }
        }
    }
    for (ll i = 0; i < D_num; ++i) {
        printf("%lld\n",Out[i]);
    }

    return 0;
}