//18. Write a program which takes the month number as an input and display number of days in that month
#include<stdio.h>
int main(){
    int m;
    printf("Enter a month: ");
    scanf("%d",&m);

    if(m==1 || m ==3 || m==5 || m==7||m==8||m==10||m==12){

    printf("There are 31 days.");}

    else if(m==4 || m ==6 || m==9 || m==11){
    printf("There are 30 days.");}

    else if(m==2){
    printf("There are 28/29 days. ");}

    else 
    printf("Invalid month ");

    return 0;
}