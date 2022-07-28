// Write a program to reverse a given number
#include<stdio.h>
int main(){
    int n,new=0;
    printf("Enter the number: ");
    scanf("%d",&n);

    while(n>0){
        new=new*10 + n%10;
        n=n/10;
    }

    printf("Reverse of the number is: %d", new);
    return 0;
}