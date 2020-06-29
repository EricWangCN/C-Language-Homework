#include <stdio.h>
#include <string.h>

int main() {
    char a[64];
    gets(a);
    int b=1,c=0;
    int i;
    for(i = 0; i <=64; i++)
    {
        if(a[i] == ' ') b = 1;
        if(b == 1 && a[i] != ' ')
        {
            b = 0;
            c++;
        }
    }
    if(a[strlen(a)-1] == ' ') c--;
    printf("%d\n",c);
    return 0;
}