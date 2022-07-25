//Write a program to check whether a given number is positive, negative or zero.

#include<stdio.h>
int main()
{   
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
      if(n>0 )                        
        printf("Positive"); 
      if(n<0)
    printf("Negative");
      if(n==0)
    printf("zero");
    

  return 0;
}