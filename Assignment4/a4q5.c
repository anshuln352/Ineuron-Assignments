#include<stdio.h>
int main(){
    printf("First 10 odd numbers in reverse order:\n");
    for(int i=10;i>0;printf("%d ",(2*i)-1)&&i--);
    return 0;
}