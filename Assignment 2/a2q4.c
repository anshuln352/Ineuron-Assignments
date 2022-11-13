// C program to swap the values of two variables without using third variable..
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two values:");
    scanf("%d%d",&a,&b);
    printf("a=%d\nb=%d\n\n",a,b);
    a= a+b;
    b= a-b;
    a= a-b;
    printf("a=%d\nb=%d",a,b);
}