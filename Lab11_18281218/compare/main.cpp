#include <stdio.h>

int fun1(char *s1, char *s2);
int fun2(char *s1, char *s2);

int main() {
    char s1[1000],s2[1000];
    gets(s1);
    gets(s2);
    printf("%d\n",fun1(s1,s2));
    printf("%d\n",fun2(s1,s2));
    return 0;
}

int fun1(char *s1, char *s2){
    int a1[128]={0},a2[128]={0},i = 0;
    while (s1[i] != '\0'){
        a1[s1[i]] = 1;
        i++;
    }
    i = 0;
    while (s2[i] != '\0'){
        a2[s2[i]] = 1;
        i++;
    }
    for (int i = 0; i < 128; ++i) {
        if (a1[i]-a2[i]) return 0;
    }
    return 1;
}
int fun2(char *s1, char *s2){
    int a1[128]={0},a2[128]={0},i = 0;
    while (s1[i] != '\0'){
        a1[s1[i]] ++;
        i++;
    }
    i = 0;
    while (s2[i] != '\0'){
        a2[s2[i]] ++;
        i++;
    }
    for (int i = 0; i < 128; ++i) {
        if (a1[i]-a2[i]) return 0;
    }
    return 1;
}