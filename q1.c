/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

#define PI 3.1415

int main(int argc, char *argv[])
{
    float radius;
    double r = 1.0;
    printf("please enter the radius: ");
    scanf("%lf", &r);
    double diameter = 2 * r ;
    double surface_area = 4 * PI * r * r;
    double volume = (surface_area * r) / 3 ;
    printf("The diameter is %2.2f\n", diameter);
    printf("The surface area is %2.2f\n", surface_area);
    printf("The volume is %2.2f\n", volume);
    

    return 0;
}




