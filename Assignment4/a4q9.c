#include<stdio.h>
int main(){
    printf("Cubes of first 10 natural numbers:\n");
    for(int i=1;i<=10;printf("Cubes of %d is %d\n",i,i*i*i)&&i++);
    return 0;
}