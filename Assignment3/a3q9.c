#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter three digits:");
    scanf("%d%d%d",&a,&b,&c);
    a=(a>=b)?a:b;
    c=(c>=a)?c:a;
    printf("Greatest among three is %d",c);
    return 0;
}