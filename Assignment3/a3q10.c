#include<stdio.h>
#include<math.h>
int main(){
    float sp,cp,x;
    printf("Enter the cost price and selling price of the product:\nCP:");
    scanf("%f",&cp);
    printf("SP:");
    scanf("%f",&sp);
    if(sp>cp){
        x= ((sp-cp)*100)/cp;
        printf("Profit is %.2f%%",x);
    }
    else if(sp<cp){
        x= x= (-(cp-sp)*100)/cp;
        printf("Loss is %.2f%%",x);
    }
    else{
        printf("No PROFIT NO LOSS");
    }
    return 0;
}