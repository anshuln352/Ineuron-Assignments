// C program to print the unit digit of a number..
#include<stdio.h>
int main(){
    int x,rem;
    printf("Enter a number:");
    scanf("%d",&x);
    rem = x%10;
    printf("Unit digit of number is %d",rem);
    return 0;
}