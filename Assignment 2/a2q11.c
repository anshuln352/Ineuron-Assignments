//Write a program to input a number from the user and also input a digit. Append a digit in the number and print the resulting number...
#include<stdio.h>
int main(){
    int x,y;
    printf("Enter a number:");
    scanf("%d",&x);
    printf("Enter a digit that is to be append into the last of the user input number:");
    scanf("%d",&y);
    x= x*10+y;
    printf("%d",x);
    return 0;
}