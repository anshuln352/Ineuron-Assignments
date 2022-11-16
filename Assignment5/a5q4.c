#include<stdio.h>
int main(){
    int n,i=1;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n--)printf("%d ",2*i-1)&&i++;
}