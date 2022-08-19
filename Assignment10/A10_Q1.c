//A10_Q1  Write a function to calculate the area of a circle. (TSRS)
#include<stdio.h>
float area( int);
int main(){

int r;
printf("Enter the radius of the circle: ");
scanf("%d", &r);

printf("Area of the circle is: %f", area(r));
return 0;
}
float area(int a){
   float pi=3.14;
    return pi*a*a;
    
}