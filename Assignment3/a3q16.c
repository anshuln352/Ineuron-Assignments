#include<stdio.h>
int main(){
    char x;
    printf("Enter a character:");
    scanf("%c",&x);
    if(x>=65&&x<=90){
        printf("Uppercase character");
    }
    else if(x>97&&x<=122){
        printf("Lowercase character");
    }
    else if(x>=48&&x<=57){
        printf("Digit");
    }
    else{
        printf("Special character");
    }
    return 0;
}