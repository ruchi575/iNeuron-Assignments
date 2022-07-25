//Write a program to input a three-digit number and display the sum of the digits.

#include<stdio.h>
int main()
{
    int n, sum=0;
    printf("Enter three digit number: ");
    scanf("%d",&n);
    int a=n%10;
    n=n/10;
    int b=n%10;
    n=n/10;
    sum=sum+a+b+n;
    printf("Sum of the digits:%d",sum);

    return 0;
}