//Write a program to count digits in a given number

#include<stdio.h>

int main()
{
    int n,count=1;
    printf("Enter the number n: ");
    scanf("%d",&n);
    while(n/10){
        n=n/10;
        count++;
    }
    printf("Count of digits: %d", count);


    return 0;
}