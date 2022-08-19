//A12_Q1  Write a recursive function to print first N natural numbers

#include<stdio.h>
void printN(int); 
int main(){
int n,ch,flag;
printf("\nEnter the number: ");
scanf("%d", &n);
printN(n);
return 0;
}
void printN(int n){

    if(n>0){
        printN(n-1);
        printf("%d ", n);
    }
        
}
      