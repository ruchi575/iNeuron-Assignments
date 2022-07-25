//Write a program to find the position of first 1 in LSB.

#include<stdio.h>
int main()
{
    int n;
    printf("Enter three digit number: ");
    scanf("%d",&n);
    printf("Position of 1 in LSB:%d", (n && ~(n-1)));


return 0;
}

