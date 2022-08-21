/*                   Assignment - 01

6. WAP to print the name of the user in double quotes.

*/                                 
#include<stdio.h>

int main()
{
    char str[20];
    printf("Enter your name: ");
    scanf("%s",&str);
    printf("Hello : \"%s\" ",str);

}