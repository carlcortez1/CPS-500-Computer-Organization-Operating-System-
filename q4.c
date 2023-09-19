/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void arrayAddition(int a[], int b[], int n, int o[]);

int main()
{
    int a[] = {1,2,3,4,5,6,7,8,9};
    int b[] = {9,8,7,6,5,4,3,2,1};
    int o[10]; 
    int n = 9;
    int x;
    
    arrayAddition(a,b,n,o);
    
    puts("A =");
    for(x=0; x<n; x++)
    printf("%d", a[x]);
    putchar('\n');
    
    puts("B =");
    for(x=0; x<n; x++)
    printf("%d", b[x]);
    putchar('\n');

    
    puts("O =");
    for(x=0; x<n; x++)
    printf("%d", o[x]);
    putchar('\n');
    

}

void arrayAddition(int a[], int b[], int n, int o[]){
    for(int x=0; x<n; x++){
    o[x] = a[x]+b[x];
    putchar('\n');
    }
}




