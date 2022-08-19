//A10_Q6  Write a function to calculate the factorial of a number. (TSRS)

#include<stdio.h>
int fact( int);
int main(){

int n;
printf("Enter the Number: ");
scanf("%d", &n);

 printf("Factorial of the number is: %d", fact(n));
return 0;
}
int fact(int p){
    int fact=1;
    if(p==0)
    return p;
    else {
    for(int i=1;i<=p;i++){
        fact*=i;
    } 
    return fact;}   
}