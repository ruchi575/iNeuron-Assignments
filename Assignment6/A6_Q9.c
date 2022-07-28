//Write a program to calculate LCM of two numbers
#include<stdio.h>
int main(){

    int n,m,i,lcm;
    printf("Enter the numbers: ");
    scanf("%d%d",&n,&m);

    for( i=n>m?n:m ;i<=m*n ; i++){
           
        if(i%m==0 && i%n==0){
            lcm=i; 
            break;
        }

        else continue;
    }

printf("The LCM of the two number is: %d",lcm);

return 0;

}