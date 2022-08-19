//A12_Q6  Write a recursive function to print first N even natural numbers in reverse order
#include<stdio.h>
void printEven(int,int);
int main(){
int n, flag=0;
printf("Enter the number: ");
scanf("%d", &n);
printEven(n,flag);
return 0;
}

void printEven(int n, int flag){
    if(n>0){
        flag+=2;
        printEven(n-1,flag);
        printf("%d ",flag);             
    }
}

      