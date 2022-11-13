//Write A C program to take a number from the user and rotate its digits by one position towards the right...
#include<stdio.h>
#include<math.h>
int main(){
    int x,y,temp,n=0;
    printf("Enter a number:");
    scanf("%d",&x);
    temp =x;
    while(temp!=0){
        n++;
        temp/=10;
    }
    y = x%10;
    x= y*pow(10,n-1)+ x/10;
    printf("%d",x);
    return 0;
}