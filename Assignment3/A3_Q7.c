//Write a program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots

#include<stdio.h>
#include<math.h>
int main()

{  
    float a,b,c,D,root1,root2, realPart, imagPart;
    printf("Enter the coefficients a,b,c:");
    scanf("%f %f %f",&a ,&b, &c);
      //ax^2+bx+c==0
    D=(b*b-(4*a*c));
    
    if(D>0){
    root1=(-b+sqrt(D))/2*a;
    root2=(-b-sqrt(D))/2*a;
     printf("Roots are real and distinct: %f and %f",root1,root2);
    }
     if(D==0){
       root1=root2=(-b/(2*a));
       printf("Roots are real and equal: %f and %f",root1,root2);
     }  
     if(D<0)
     {
        realPart = -b / (2 * a);
        imagPart = sqrt(-D) / (2 * a);
        printf("Roots are not real:root1=%f+%fi  root2=%f-%fi",realPart, imagPart,realPart, imagPart);
     }
    return 0;
}