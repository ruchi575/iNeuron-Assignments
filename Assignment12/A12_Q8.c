//A12_Q8  Write a recursive function to print binary of a given decimal number
#include<stdio.h>
void d2b(int);
int main(){
int n, flag=0;
printf("Enter the number: ");
scanf("%d", &n);
d2b(n);
return 0;
}
void d2b(int n){
    if(n>0){
        d2b(n/2);
        printf("%d ", n%2);             
    }
}  