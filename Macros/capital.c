/*Checking is a character is capital or not*/
#include<stdio.h>
#define IS_CAP(n)(n>='A'&&n<='Z')
int main()
{
    char n;
    printf("Enter a character: ");
    scanf("%c",&n);
    if(IS_CAP(n))
        printf("The character is capital");
    else
        printf("The character is not capital ");
    return 0;
}