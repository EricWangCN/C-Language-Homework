#include <stdio.h>
#include <mm_malloc.h>

int ReadRealData(double dArray[], int nCount);
int FindMinElement(double dArray[], int nCount);
int FindMaxElement(double dArray[], int nCount);
double Average(double dArray[], int nCount);
double Variance(double dArray[], int nCount);

int main() {
    int n;
    double *array = (double*)malloc(n* sizeof(double));
    printf("How many elements do you want to input?");
    scanf("%d",&n);
    ReadRealData(array,n);
    printf("The order of the min element is:%d\n",FindMinElement(array,n));
    printf("The order of the max element is:%d\n",FindMaxElement(array,n));
    printf("Average is:%lf\n",Average(array,n));
    printf("Variance is:%lf\n",Variance(array,n));
    return 0;
}

int ReadRealData(double dArray[], int nCount){
    for (int i = 0; i < nCount; ++i) {
        printf("please input the No.%d num:",i+1);
        scanf("%lf",&dArray[i]);
    }
    return nCount;
}

int FindMinElement (double dArray[], int nCount) {
    int min = 0;
    for (int i = 0; i < nCount; ++i) {
        if(dArray[i]<dArray[min]) min = i;
    }
    return min;
}

int FindMaxElement (double dArray[], int nCount){
    int max = 0;
    for (int i = 0; i < nCount; ++i) {
        if(dArray[i]>dArray[max]) max = i;
    }
    return max;
}

double Average(double dArray[], int nCount){
    double sum = 0;
    for (int i = 0; i < nCount; ++i) {
        sum += dArray[i];
    }
    return sum/nCount;
}

double Variance(double dArray[], int nCount){
    double ave = Average(dArray,nCount),sum;
    for (int i = 0; i < nCount; ++i) {
        sum += (dArray[i] - ave)*(dArray[i] - ave);
    }
    return sum/nCount;
}