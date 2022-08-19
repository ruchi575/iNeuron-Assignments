//A10_Q5  Write a function to print first N odd natural numbers. (TSRN)

#include<stdio.h>
void print( int);
int main(){

int n;
printf("Enter the Number: ");
scanf("%d", &n);

 print(n);
return 0;
}
void print(int p){
    int j=1;
    for(int i=1;i<=p;i++){
    
        printf("%d ",j);
        j=j+2;
    }    
}