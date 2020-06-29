#include <stdio.h>
#include <string.h>

int main(int argc,char *argv[]) {
    for (int i = 0; i < argc; ++i) {
        if(strstr(argv[i],"s")) printf("*");
        puts(argv[i]);
    }

    return 0;
}