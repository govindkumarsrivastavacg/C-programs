#include<stdio.h>
#include<math.h>
int main()
{
   int n,i,fact;
    i=1;
    fact=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(i<=n)
    {
        fact=fact*i;
        i++;
    }
    printf("Factorial of %d is %d\n",n,fact);
    return 0;
}
