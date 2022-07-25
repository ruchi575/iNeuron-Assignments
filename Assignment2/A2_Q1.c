//Write a program to print unit digit of a given number

#include<stdio.h>

int main()
{
    int x;
    printf("Enter the number: ");
    scanf("%d",&x);
    x=x%10;
    printf("Unit Digit of the number is %d",x);
    return 0;
}