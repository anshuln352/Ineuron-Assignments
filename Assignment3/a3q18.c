#include<stdio.h>
int main(){
    int x;
    printf("Enter month no.");
    scanf("%d",&x);
    if(x==1||x==3||x==5||x==7||x==8||x==10||x==12){
        printf("No. of Days are 31.");
    }
    else if(x==4||x==6||x==9||x==11){
        printf("No. of Days are 30.");
    }
    else if(x==2){
        printf("No. of Days are 28 and 29 in case of leap year.");
    }
    else{
        printf("Wrong Input.");
    }
    return 0;
}