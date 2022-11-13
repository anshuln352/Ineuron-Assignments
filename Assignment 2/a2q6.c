//A C program which takes a character as an input and displays its ASCII code.
#include<stdio.h>
int main(){
    char x;
    printf("Enter a character:");
    scanf("%c",&x);
    printf("ASCII value of %c is %d",x,x);
    return 0;
}