/*Write a program to find the greatest among three given numbers. Print number once if the greatest number appears two or three times.*/

#include<stdio.h>
int main()


{   int a,b,c;
    printf("Enter three numbers :");
    scanf("%d %d %d",&a,&b,&c);
    if(a>=b)
        if(a>c)
        printf("%d is the Greatest",a);
    
      if(b>c && b!=a)
        printf("%d is the Greatest",b);
     if(c>=b ||c>=a)
    printf("%d is the Greatest",c);
        return 0;
}