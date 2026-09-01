#include<stdio.h>
int factorial(int);
int main()
{
    int num,fact;
    printf("Enter a number");
    scanf("%d",&num);
    fact=factorial(num);
    printf("\n The factorial of the number is: %d",fact);
    return 0;
}
int factorial(int num)
{
    int f;
    if(num==1)
        return 1;
    else
        f=num*factorial(num-1);
    return(f);
    
}