#include<stdio.h>
int main(){
    int x,y;
    printf("Enter two numbers:");
    scanf("%d%d",&x,&y);
    if(x>y)
        printf("%d",x);
    else if(x<y)
        printf("%d",y);
    else
        printf("X and Y are same i.e. %d",x);
    return 0;
}