//Write a program to print the first N natural numbers in reverse order


#include<stdio.h>
int main()
{
     int N;
    printf("Enter the value of N:");
    scanf("%d",&N);
    for( int i=N;i>=1;i--)
    printf("%d\n",i);
    return 0;
}