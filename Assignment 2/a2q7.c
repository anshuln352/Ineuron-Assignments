//A C program to find the position of first 1 in LSB.
#include<stdio.h>
int main(){
    int x,c=0;
    printf("Enter a binary number:");
    scanf("%d",&x);

    while(x){
        if(x%10==1){
            c++;
            break;
        }
        c++;
        x/=10;
    }
    printf("%d",c);
    return 0;
}