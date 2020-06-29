#include <stdio.h>

int search(int nArray[], int n, int x);

int main() {
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int x;
    printf("Please input 10 nums in order:");
    scanf("%d%d%d%d%d%d%d%d%d%d",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5],&a[6],&a[7],&a[8],&a[9]);
    printf("Please input the num which is you want to find:");
    scanf("%d",&x);
    printf("is:%d\n",search(a,10,x));
    return 0;
}

int search(int nArray[], int n, int x){
    int low = 0, high = n-1,mid;
    while (high - low >= 0){
        mid = (low+high)/2;
        if (x > nArray[mid]){
            low = mid+1;
        } else if (x < nArray[mid]){
            high = mid-1;
        } else {
            return 1;
        }
    }
    return 0;
}