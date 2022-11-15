#include<stdio.h>
int main(){
    printf("First 10 odd numbers are:\n");
    for(int i=1;i<=10;printf("%d ",2*i-1)&&i++);
    return 0;
}