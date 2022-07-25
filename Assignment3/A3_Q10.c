//Write a program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage.

#include<stdio.h>
int main()


{   
     float CP,SP,Profit,Loss;
     printf("Enter the Cost Price : ");
     scanf("%f",&CP);
     printf("Enter the Sell Price : ");
     scanf("%f",&SP);
     Profit=((SP-CP)/CP) *100;
     Loss=((SP-CP)/CP) *100;
       if(SP>CP)
       printf("Profit Percentage : %f %%", Profit);
       if(CP>SP)
        printf("Loss Percentage : %f  %%", Loss);
        if(CP==SP)
       printf("No Profit No Loss");
     
  return 0;
}