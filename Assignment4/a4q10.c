#include<stdio.h>
int main(){
    printf("Table of 5:\n");
    for(int i=1;i<=10;printf("5 X %d = %d\n",i,5*i)&&i++);
    return 0;
}