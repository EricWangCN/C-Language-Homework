#include <stdio.h>

int BIT(char *str);

int main() {
    char a[100][1000],b[1000];
    int i = 0,j = 0,max = 0;
    while (gets(b) != NULL){
        gets(a[i]);
        i++;
    }
    for (j = 0; j < i; ++j) {
        if(BIT(a[j]) > BIT(a[max])) max = j;
    }
    printf("The longest is:");
    puts(a[max]);
    return 0;
}

int BIT(char *str){
    int i = 0;
    while (str[i]!= '\0') i++;
    return i;
}