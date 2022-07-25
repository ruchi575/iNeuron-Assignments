//Write a program to print size of an int, a float, a char and a double type variable

#include<stdio.h>
int main()
{
   int a;
   float b;
   char c;
   double d;

   printf("size of int variable  %d\n",sizeof(a));
   printf("size of float variable  %d\n",sizeof(b));
   printf("size of char variable %d\n",sizeof(c));
   printf("size of double variable %d\n",sizeof(d));
                              
    return 0;
}