#include<stdio.h>
int main(){
    int x1,x2,x3,x4,x5;
    float avg;
    printf("Enter the marks of 5 subjects:");
    scanf("%d%d%d%d%d",&x1,&x2,&x3,&x4,&x5);
    avg=(float)(x1+x2+x3+x4+x5)/5;
    if(avg>=33){
        printf("Your average marks are %.2f. You are Passed",avg);
    }
    else{
        printf("Your average marks are %.2f. You are Failed",avg);
    }
    return 0;
}