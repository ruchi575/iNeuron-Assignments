//Write a program to check whether a given number is divisible by 3 and divisible by 2.



#include<stdio.h>
int main()
{   
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
      if(n%6==0 )                        //If the number is divisible by 2 and 3 both then it is multiple of 6
        printf("Divisible by 3 & 2");
     else
    printf("Not Divisible");
    

  return 0;
}

