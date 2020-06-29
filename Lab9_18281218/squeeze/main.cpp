#include <stdio.h>
#include <string.h>
void squeeze(char s1[], char s2[]);

int main() {
    char ss1[1000],ss2[1000];
    printf("please input s1:");
    gets(ss1);
    printf("please input s2:");
    gets(ss2);
    squeeze(ss1,ss2);
    puts(ss1);
    return 0;
}

void squeeze(char s1[], char s2[]){
    int i = 0,j = 0;
    while (s2[i] != '\0'){
        j = 0;
        while (s1[j] != '\0'){
            if (s1[j] == s2[i]) s1[j] = 127;
            j++;
        }
        i++;
    }
}