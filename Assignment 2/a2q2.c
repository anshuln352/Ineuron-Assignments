// C program to print the number without its unit digit..
#include<stdio.h>
int main(){
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    printf("Entered number is %d\n",x);
    printf("The number without its unit digit is %d",x/=10);
    return 0;
}