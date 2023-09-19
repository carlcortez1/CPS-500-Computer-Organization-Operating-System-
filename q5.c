/******************************************************************************

Couldn't figure out the program termination portion

*******************************************************************************/
#include <stdio.h>
#include<string.h>

int main()
{
    int x, y, answer, sign;
    char opp;
    do
    {
    scanf("%d",&x);
    scanf("%c",&opp);
    scanf("%d",&y);
    
    switch(opp)
    {
        case '+':
            answer = x + y;
            break;
        case '-':
            answer = x - y;
            break;
        case '/':
            answer = x / y;
            break;
        case '*':
            answer = x * y;
            break;
        case '%':
            answer = x % y;
            break;
    }
    printf("%d\n\n", answer);
    
}
while(answer >= 0 || answer <0);
}
    







