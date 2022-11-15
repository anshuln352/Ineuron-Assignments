#include<stdio.h>
int main(){
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    if(x%2){
        printf("Odd Number");
    }
    else{
        printf("Even Number");
    }
    return 0;
}