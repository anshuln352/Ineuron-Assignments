#include<stdio.h>
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n)printf("%d ",2*n-1)&&n--;
}