#include <stdio.h>
#include <math.h>
long SumCube(float limit);

int main() {
    float IN;
    long OUT;
    printf("Please input the limitation:");
    scanf("%f",&IN);
    OUT=SumCube(IN);
    printf("%ld",OUT);
    return 0;
}

long SumCube(float limit) {
    long a = 0;
    if ((fabs(limit - (int) limit) < 10e-8) && limit > 0) {
        for (int i = 0; i <= limit; ++i) {
            a += i * i * i;
        }
    }
    return a;
}
