//Write a program to check whether a given year is a leap year or not.

#include<stdio.h>
int main()


{   int x;
    printf("Enter the year:");
    scanf("%d",&x);
    if((x % 4 == 0) && (x % 100 != 0) || (x % 400 == 0))
        printf("Leap Year");
    else
      printf("Not a Leap year");
    return 0;
}