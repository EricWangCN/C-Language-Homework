#include <stdio.h>
#include <mm_malloc.h>

void fun(char *s,char c,int m,int n);

int main() {
    int n,m;
    printf("Please input how many chars int the string:");
    scanf("%d",&n);
    char *str = (char*)malloc((n+1)* sizeof(char)),c;
    printf("Please input the string:");
    gets(str);
    gets(str);
    printf("Please input which char you want to be used to replace:");
    scanf("%c",&c);
    printf("Where do you want to replace:");
    scanf("%d",&m);
    fun(str,c,m,n);
    puts(str);
    return 0;
}

void fun(char *s,char c,int m,int n){
    for (int i = m-1; i < n; ++i) {
        s[i] = c;
    }
}