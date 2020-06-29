#include <stdio.h>
#include <string.h>

int count(char str[], char c);

int main() {
    char flag[1000],b;
    printf("please input a string:");
    gets(flag);
    printf("please input the word you want to count:");
    scanf("%c",&b);
    if (b >= 'a') b -= 32;
    printf("have %d same letter\n",count(flag, b));
    return 0;
}

int count(char str[], char c){
    int a = 0;
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'a') str[i] -= 32;
        i++;
    }
    i = 0;
    while (str[i] != '\0') {
        if (str[i] == c) a++;
        i++;
    }
    return a;
}
