//A10_Q4  Write a function to print first N natural numbers (TSRN)

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
    for(int i=1;i<=p;i++){
        printf("%d ",i);
    }    
}