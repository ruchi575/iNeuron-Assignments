//Write a program to check whether a given number is a Prime number or not
#include<stdio.h>
int main(){

    int n,flag=0;
    printf("Enter the number: ");
    scanf("%d", &n);

    for(int i=2; i<=n/2; i++){
        if(n%i==0)
        flag+=1;  
    }

    if(flag==0)
    printf("Prime number");
    else
    printf("Not a prime number");

    return 0;
}