//A C program to print the sum of digits of a number..
#include<stdio.h>
int main(){
    int x,sum=0;
    printf("Enter a number:");
    scanf("%d",&x);
    while(x){
        sum = sum + x%10;
        x/=10;
    }
    printf("sum of the digits of number is %d",sum);
    return 0;
}