#include<stdio.h>
int main()


{   int x;
    printf("Enter the number:");
    scanf("%d",&x);
    
    if(x<=999 & x>99)
        printf("Three digit number");
    else
      printf("Not three digit number");
    return 0;
}