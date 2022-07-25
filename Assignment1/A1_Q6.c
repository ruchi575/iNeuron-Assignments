//WAP to print the name of the user in double quotes.
//Expected output format – “Hello , Amit Kumar”


#include<stdio.h>
int main()
{
    char a[100];
    printf("Enter your name:");
    scanf("%s",&a);
    printf(" \"Hello %s!\"",a);

    return 0;
}