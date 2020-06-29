#include <stdio.h>
#include <stdlib.h>

int main() {
        char operate;
        double num1, num2;
        double OUT;
        scanf("%c %lf%lf",&operate,&num1,&num2);
        if((operate == '+')||(operate == '-')||(operate == '*')||(operate == '/'))
        {
            if(operate == '/' && (num2 == 0)){
                printf("Divisor zero is meaningless!\n");
            }
            else{
                switch(operate) {
                    case '+':
                        OUT = num1 + num2;
                        break;
                    case '-':
                        OUT = num1 - num2;
                        break;
                    case '*':
                        OUT = num1 * num2;
                        break;
                    case '/':
                        OUT = num1 / num2;
                        break;
                }
                printf("%lf\n",OUT);
            }
        }
        else printf("Unknown operator!\n");
}