#include<stdio.h>
int main(){
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    if(x%7==0&&x%3==0){
        printf("Divisible by 7 and 3 both");
    }
    else if(x%7==0){
        printf("Divisible by 7");
    }
    else if(x%3==0){
        printf("Divisible by 3");
    }

    else{
        printf("Not Divisible by 3 or 7");
    }
    return 0;
}