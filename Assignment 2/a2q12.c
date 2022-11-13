//Assume price of 1 USD is INR 76.23. Write A C program to take the amount in INR and convert it into USD.
#include<stdio.h>
#define usd1 76.23 
int main(){
    float rupees,dollars;
    printf("Enter the amount in rupees to convert in dollars:");
    scanf("%f",&rupees);
    dollars= rupees/usd1;
    printf("%.2f",dollars);
    return 0;
}