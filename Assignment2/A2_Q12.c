//Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and convert it into USD.

#include<stdio.h>

int main()
{
    float x,y;
    printf("Enter the amount in Ruppees: ");
    scanf("%f",&x);
    x/=76.23;
    printf("Amount in USD: %f $",x);
    return 0;
}