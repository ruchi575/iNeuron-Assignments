//Write a program to print the first N natural numbers.

#include<stdio.h>
int main()
{
     int N;
    printf("Enter the value of N:");
    scanf("%d",&N);
    for( int i=1;i<=N;i++)
    printf("%d\n",i);
    return 0;
}