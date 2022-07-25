//Write a program to swap values of two int variables without using a third variable.

#include<stdio.h>

int main()
{
    int x,y;
    printf("Enter the two numbers: ");
    scanf("%d %d",&x,&y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("swapped %d   %d",x,y);
    return 0;
}