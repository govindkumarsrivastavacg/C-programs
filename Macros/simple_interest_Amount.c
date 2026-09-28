// Using a custom library to calculate simple interest and amount

#include<stdio.h>
#include "interest.h"
int main()
{
    float p,si,amt;
    int r,t;
    printf("\n Enter Principle,Rate and Time:");
    scanf("%f%d%d",&p,&r,&t);
    si=SI(p,r,t);
    printf("\nThe simple interest is: %f",si);
    amt=AMOUNT(p,si);
    printf("\nThe total amount is: %f",amt);
    return 0;
}