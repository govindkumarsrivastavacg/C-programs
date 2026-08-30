/*Compound Interest*/
#include<stdio.h>
#include<math.h>
int main()
{
    int r,i,n,q,x;/*n is the number of years and q is the number of times interest is compounded*/
    float p,amt;
    for(i=1;i<=10;i++)
    {
        printf("\nenter the value of principal,q,r,n: ");
        scanf("%f%d%d%d",&p,&q,&r,&n);
        x=n*q;
        amt=p*pow((1+r/q),x);
        printf("\n%f",amt);
    }
    return 0;
}