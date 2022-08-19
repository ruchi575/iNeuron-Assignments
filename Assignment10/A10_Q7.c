//A10_Q7  Write a function to calculate the number of combinations one can make from n items and r selected at a time. (TSRS)
#include<stdio.h>
int fact( int);
int comb(int, int);
int main(){

int n,r;
printf("Enter the n and r: ");
scanf("%d%d", &n, &r);
printf("Total combination are: %d", comb(n,r));
//printf("Factorial of the number is: %d", fact(n));
return 0;
}
int comb(int n , int r){
    int c= fact(n)/((fact(r)*fact(n-r)));
    return c;
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