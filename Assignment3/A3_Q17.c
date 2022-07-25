//Write a program which takes the length of the sides of a triangle as an input. Display whether the triangle is valid or not.

#include<stdio.h>
int main()
{   
    int a,b,c;
    printf("Enter the length of sides of triangle : ");
    scanf("%d %d %d",&a,&b,&c);
      if(((a+b)<=c) || ((b+c)<=a) || ((a+c)<=b) )                        
    printf("InValid Triangle"); 
      else
    printf("Valid !");
    

  return 0;
}