#include<stdio.h>
int main(){
    printf("Natural numbers in reverse order:\n");
    for(int i=10;i>0;printf("%d ",i--));
    return 0;
}