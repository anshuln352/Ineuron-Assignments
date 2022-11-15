#include<stdio.h>
int main(){
    printf("Squares of first 10 natural numbers:\n");
    for(int i=1;i<=10;printf("Square of %d is %d\n",i,i*i)&&i++);
    return 0;
}