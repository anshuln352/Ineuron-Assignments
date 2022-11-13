//C program to swap values of two variables using third variable..
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    printf("a=%d\nb=%d\n\n",a,b);
    c= a+b;
    b= c-b;
    a= c-b;
    printf("a=%d\nb=%d",a,b);
    return 0;
}