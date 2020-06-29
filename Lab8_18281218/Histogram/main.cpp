#include <stdio.h>
#include <string.h>
#include <mm_malloc.h>

int FindMaxElement (int dArray[], int nCount);
int FindMinElement(int dArray[], int nCount);
void DrawHistogram(int nArray[], int nCount, char ch);
void ReadRealData(int dArray[], int nCount);
void CountRangeItems(int nDataItems);

int main() {
    int n,m,*array = (int*)malloc(n* sizeof(int));
    char c;
    printf("Please set the items of the Array & the Char:");
    scanf("%d %c",&n,&c);
    ReadRealData(array,n);
    DrawHistogram(array,n,c);
    return 0;
}

int FindMaxElement (int dArray[], int nCount){
    int max = 0;
    for (int i = 0; i < nCount; ++i) {
        if(dArray[i]>dArray[max]) max = i;
    }
    return max;
}

int FindMinElement (int dArray[], int nCount) {
    int min = 0;
    for (int i = 0; i < nCount; ++i) {
        if(dArray[i]<dArray[min]) min = i;
    }
    return min;
}

void DrawHistogram(int nArray[], int nCount, char ch){
    int a;
    for (int i = 0; i < nCount; ++i) {
        for (int j = 1; j <= nArray[FindMaxElement(nArray,nCount)] + 3; ++j) {
            if(j <= nArray[i]) printf("%c",ch);
            else printf(" ");
        }
        printf("%d\n",nArray[i]);
    }
}

void ReadRealData(int dArray[], int nCount){
    for (int i = 0; i < nCount; ++i) {
        printf("please input the No.%d num:",i+1);
        scanf("%d",&dArray[i]);
    }
}
