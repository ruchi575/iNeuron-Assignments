/*Write a program to take marks of 5 subjects from the user. 
Assume marks are given out of 100 and passing marks is 33.
 Now display whether the candidate passed the examination or failed.*/

#include<stdio.h>
int main()


{   
     int a,b,c,d,e, Total;
     printf("Enter marks : \n");
     printf("\n Hindi : ");
      scanf("%d",&a);
     printf("\n English : ");
      scanf("%d",&b);
     printf("\n Maths : ");
      scanf("%d",&c);
     printf("\n Science : ");
      scanf("%d",&d);
      printf("\n Computer : ");
     scanf("%d",&e);
     
    Total= a+b+c+d+e;
       if(Total <33)
       printf("Fail!\n");
      else
        printf("Passed \n");
       printf("Total Marks= %d out of 100",Total);
     
  return 0;
}