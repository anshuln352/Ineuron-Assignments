//A C program to check whether a given number is positive or non-positive.
#include<stdio.h>
int main(){
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    if(x<=0){
        printf("Non Positive");
    }
    else{
        printf("Positive");
    }
    return 0;
}