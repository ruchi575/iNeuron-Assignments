#include<stdio.h>
int main()


{   int x;
    printf("Enter the number:");
    scanf("%d",&x);
    
    if((x/2)*2==x)
        printf("Even number");
    else
      printf("Odd number");
    return 0;
}