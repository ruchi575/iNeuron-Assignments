//Write a program to take a three-digit number from the user and rotate its digits by one position towards the right.

#include<stdio.h>

int main()
{
    int x,y;
    printf("Enter the  3 digit number: ");
    scanf("%d",&x);
    y=x%10;
    x=x/10;
    y=y*100+x;
    printf("new numer : %d",y);
    return 0;
}