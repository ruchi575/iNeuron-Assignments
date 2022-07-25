//WAP to calculate the length of String using printf function.

#include<stdio.h>
#include<String.h>
int main()
{
    char Str[1000];
  
 
    printf("Enter the String: ");
    scanf("%s", Str);
 
    printf("Length of Str is %ld", strlen(Str));

return 0;
}