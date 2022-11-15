#include<stdio.h>
int main(){
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    if(x%6==0){
        printf("Divisible by 2 and 3");
    }
    else{
        printf("Not Divisible by 2 and 3");
    }
    return 0;
}