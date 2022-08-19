//A10_Q2  Write a function to calculate simple interest. (TSRS)
#include<stdio.h>
float si( int, float, int);
int main(){

int p,t;
float r;
printf("Enter the Principle Amount: ");
scanf("%d", &p);
printf("Enter the Rate of interest: ");
scanf("%f", &r);
printf("Enter the Time in years: ");
scanf("%d", &t);

printf("Simple interest is: %f", si(p,r,t));
return 0;
}
float si(int p,float r, int t){
   float si=(p*r*t)/100;
    return si;
    
}