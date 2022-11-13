//A C program to make the last digit of a number stored in a variable as zero.
#include<stdio.h>
int main(){
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    x/=10;
    x*=10;
    printf("%d",x);
    return 0;
}