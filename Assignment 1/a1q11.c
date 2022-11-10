#include<stdio.h>
int main(){
    int HH, MM;
    printf("Enter the Time in HH:MM fomat:\n");
    scanf("%d:%d",&HH,&MM);
    if(HH>23||HH<0||MM>59||MM<0)
        printf("Wrong input");
    else
        printf("%d hour and %d minute",HH,MM);
    return 0;
}