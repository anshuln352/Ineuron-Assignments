// C program to calculate and print the area of circle...
#include<stdio.h>
#define pi 3.14285714285
int main()
{
    int r;
    float area;
    printf("Enter the radius of which you want the area:");
    scanf("%d",&r);
    area = pi * r * r;
    printf("Area of circle is %f having the radius %d",area,r);
    return 0;
}