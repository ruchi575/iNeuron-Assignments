//Write a program to check whether a given number is divisible by 7 or divisible by 3.



#include<stdio.h>
int main()
{   
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
      if(n%3==0 || n%7==0 )                        
    
        printf("Divisible");
        
     else
    printf("Not Divisible");
    

  return 0;
}