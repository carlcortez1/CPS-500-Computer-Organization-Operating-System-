/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(int argc, char *argv[])
{
    int n,i,j;
    sscanf(argv[1],"%d",&n);
    for(i=1; i<=n;i++)
    {
        for(j=1; j <= 2*n - 1; j++)
        {
            if(j ==n) // if column equals n, plus sign spine.
                {printf("+");
                }
                if(j >= n - (i-1) && j < n + (i-1)) //if column <= n-(row-1) and < n+(row-1), star!
                {
                    printf("*");
                }
                else
                    printf(" ");
        }
        printf("\n");
    }
}    






