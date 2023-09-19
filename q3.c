/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(int argc, char *argv[])
{
    
    int n;
    int fib;    
        sscanf(argv[1],"%d", &fib);
     
int fibonacci[fib];

    fibonacci[0] = 1; // start
    fibonacci[1] = 1;
    
    
    for (n = 2; n <= fib + 1 ; ++n)
        fibonacci[n] = fibonacci[n-2] + fibonacci[n-1];
        
    for (n = 0; n < fib + 1; ++n)
        printf("%d: %d\n", n, fibonacci[n]);
        
    return 0;
}








