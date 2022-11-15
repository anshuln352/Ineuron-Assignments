#include<stdio.h>
int main(){
    char x;
    printf("Enter a character:");
    scanf("%c",&x);
    if(x>=65&&x<=90){
        printf("Uppercase");
    }
    if(x>=97&&x<=122){
        printf("Lowercase");
    }
    return 0;
}