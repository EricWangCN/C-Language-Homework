#include <stdio.h>

int BTT_EN(char *str);
int BTT_CN(char *str);
int BIT(char *str);

int main() {
    int a;
    char test[1000] = {0};
    printf("Please set MODE(EN:0,CN:1):");
    scanf("%d",&a);
    printf("Please input your string:");
    scanf("%s",test);
    if(!a) {
        if (BTT_EN(test)) printf("Yes!\n");
        else printf("No!\n");
    } else{
        if (BTT_CN(test)) printf("Yes!\n");
        else printf("No!\n");
    }
    return 0;
}

int BTT_EN(char *str){
    int a = BIT(str);
    for (int i = 0; i < a/2; ++i) {
        if (str[i] != str[a-i-1]){
            return 0;
        }
    }
    return 1;
}

int BTT_CN(char *str){
    int a = BIT(str);
    for (int i = 0; i < a/2; i+=3) {
        if (str[i] != str[a-i-3]){
            return 0;
        }
    }
    for (int i = 1; i < a/2; i+=3) {
        if (str[i] != str[a-i-1]){
            return 0;
        }
    }
    for (int i = 2; i < a/2; i+=3) {
        if (str[i] != str[a-i+1]){
            return 0;
        }
    }
    return 1;
}

int BIT(char *str){
    int i = 0;
    while (str[i]!= '\0') i++;
    return i;
}