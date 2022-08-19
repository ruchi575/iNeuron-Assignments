//A12_Q10  Write a recursive function to print reverse of a given number
#include<stdio.h>
void rev(int);
int main(){
int n;
printf("Enter the number: ");
scanf("%d", &n);
rev(n);
return 0;
}
void rev(int n){
    
    if( n<10)
        printf("%d", n);  
    else{    
        
        printf("%d",n%10);  
        rev(n/10);               
    }
}  