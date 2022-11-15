#include<stdio.h>
#include<math.h>
int main(){
    int x,count=0;
    printf("Enter a number:");
    scanf("%d",&x);
    count= (x==0)?1:log10(x)+1;
    if(count==3){
        printf("Three digit number.");
    }
    else{
        printf("Not a three digit number.");
    }
    return 0;
}