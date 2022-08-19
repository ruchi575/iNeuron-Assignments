//A12_Q9  Write a recursive function to print octal of a given decimal number
#include<stdio.h>
void d2o(int);
int main(){
int n, flag=0;
printf("Enter the number: ");
scanf("%d", &n);
d2o(n);
return 0;
}
void d2o(int n){
    if(n>0){
        d2o(n/8);
        printf("%d ", n%8);             
    }
}  