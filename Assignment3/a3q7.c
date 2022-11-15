#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    printf("Enter the coefficient of quadratic equation:\n a:");
    scanf("%d",&a);
    printf("b:");
    scanf("%d",&b);
    printf("c:");
    scanf("%d",&c);
    if((pow(b,2) - 4 *a *c)>=0){
        if((pow(b,2) - 4 *a *c)>0){
            printf("Roots are real and distinct");
        }
        else{
            printf("Roots are real and equal.");
        }
    }
    else{
        printf("Roots are complex");
    }
    
}