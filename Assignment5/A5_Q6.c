//Write a program to print the first N even natural numbers


#include<stdio.h>
int main()
{
     int N;
    printf("Enter the value of N:");
    scanf("%d",&N);
    for( int i=1;i<=N;i++)
    printf("%d\n",2*i);
    return 0;
}