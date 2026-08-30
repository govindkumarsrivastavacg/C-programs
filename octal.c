/*convert integers into their octal equivalents*/
#include<stdio.h>
int main()
{
    int num,oct,place,rem;
    place=1;
    oct=0;
    printf("enter the number: ");
    scanf("%d",&num);
    while(num>0)
    {
        rem=num%8;
        oct=oct+rem*place;
        place=place*10;
        num=num/8;
    }
    printf("the octal equivalent is: %d",oct);
    return 0;
}