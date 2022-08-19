//A10_Q9  Write a function to check whether a given number contains a given digit or not. (TSRS)

#include<stdio.h>
int check( int,int);
int main(){
int n,ch,flag;
printf("\nEnter the number: ");
scanf("%d", &n);
printf("\nEnter the digit you want to check: ");
scanf("%d", &ch);
flag= check(n,ch);
if(flag==1)
printf("The entered digit is present in the number!");
else
printf("Enterd digit is not present");

return 0;
}
int check(int n , int r){
    while(n>0){
        int a=n%10;
        if(a==r)
        return 1;
        n=n/10;
    }
    return 0;
}