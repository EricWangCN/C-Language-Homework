#include <stdio.h>

int main() {
    int apple = 0;
    int watermelon = 0;
    int pear = 0;
    printf("Apple Watermelon Pear\n");
    for (int a = 0; a <= 100; a++) {
        apple++;
        watermelon = 0;
        for (int b = 0; b <= 10; b++) {
            watermelon++;
            pear = 0;
            for (int c = 0; c <= 100; c++) {
                pear++;
                if ((0.4 * apple + 4 * watermelon + 0.2 * pear == 40) && (apple + pear + watermelon == 100)) {
                    printf("  %3d", apple);
                    printf("   %3d   ", watermelon);
                    printf("  %3d  \n", pear);
                }
            }
        }
    }
    return 0;
}