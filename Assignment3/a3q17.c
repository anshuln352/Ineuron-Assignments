#include<stdio.h>
int main(){
    float a,b,c;
    printf("Enter the sides of triangle:\n");
    scanf("%f%f%f",&a,&b,&c);
    if(a+b>c&&b+c>a&&c+a>b){
        printf("Sides of triangle are valid.");
    }
    else{
        printf("Sides of triangle are invalid.");
    }
    return 0;
}