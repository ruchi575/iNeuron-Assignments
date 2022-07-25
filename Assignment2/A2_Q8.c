//Write a program to check whether the given number is even or odd using a bitwise operator

#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    //if((n&1)==0)    //using AND OPERATOR
    //if((n|1)>n)       //using OR OPERATOR
    if((n^1)==(n+1))          //using XOR OPERATOR
    {
    printf("EVEN");
    }
    else{
    printf("ODD");
    }
    return 0;
}