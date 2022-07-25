//Write a program to swap values of two int variables


#include<stdio.h>

int main()
{
    int x,y;
    printf("Enter the two numbers: ");
    scanf("%d %d",&x,&y);
    int temp=x;
    x=y;
    y=temp;
    printf("swapped  %d  %d",x,y);
    return 0;
}