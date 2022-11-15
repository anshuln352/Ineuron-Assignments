#include<stdio.h>
int main(){
    printf("First 10 even numbers are:\n");
    for(int i=1;i<=10;printf("%d ",2*i)&&i++);
    return 0;
}