//Write a program to print a given number without its last digit.

#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    n=n/10;
    printf("The Number without its unit digit  %d",n);
    return 0;
}