// Write a program that defines a function that calculates power of one 
// number raised to another and factorial value of a number in one call. 

#include<stdio.h>
void calc(int *fact, int *power);
int main()
{
    int fact,power;
    calc(&fact,&power);
    printf("\nThe factorial of the number is %d \n The power of the number is %d",fact,power);
    return 0;
}
void calc(int *fact,int *power)
{
    int x,y,n,i,fac=1,powe=1;
    printf("Enter the number and the power numbers x,y: ");
    scanf("%d%d%d",&n,&x,&y);
    for(i=1;i<=n;i++)
    {
        fac=fac*i;
    }
    for(i=1;i<=y;i++)
    {
        powe=x*powe;
    }
    *fact=fac;
    *power=powe;
}