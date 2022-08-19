//A12_Q4  Write a recursive function to print first N odd natural numbers in reverse order
#include<stdio.h>
void printOdd(int,int); 
int main(){
int n,ch,flag=-1;
printf("\nEnter the number: ");
scanf("%d", &n);
printOdd(n,flag);
return 0;
}
void printOdd(int n,int flag){
   
    if(n>0){
        flag=flag+2; 
        printOdd(n-1, flag);
        
        printf("%d ",flag);
             
    }
}
      