#include <stdio.h>
#include <mm_malloc.h>
void DrawHistogram(int nArray[], int nCount, char ch)
{
    if (ch == '*')
        for (int i = 1; i < nCount; i++) {
            for (int j = 0; j < nArray[i]; j++)
                printf("*");
            printf("        %d\n",nArray[i]);
        }
}

void CountRangeItems(double dArray[], int nDataItems, int nArray[])
{
    int i;
    for (i = 0; i < nDataItems; ++i) {
        if (dArray[i] <= 160) ++nArray[0];
        else if (dArray[i] < 165) ++nArray[1];
        else if (dArray[i] < 170) ++nArray[2];
        else if (dArray[i] < 175) ++nArray[3];
        else if (dArray[i] > 175) ++nArray[4];
    }
}
int main()
{
    double height[] = { 185,176,165,169,160,152,187,196,178,189,196,182,181,176,159,163,168 };
    int nArray[5] = { 0 };
    int nCount = 0, size = sizeof(height) / sizeof(height[0]);
    CountRangeItems(height, size, nArray);
    DrawHistogram(nArray, 5, '*');
    return 0;
}