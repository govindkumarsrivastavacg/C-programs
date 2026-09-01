// Write a recursive function to obtain the sum of first 25 natural 
// numbers. 

#include <stdio.h>
int sum(int);
int main()
{
    int num=1;
    printf("The first 25 natural numbers are:");
    for(int i=1; i<=25; i++)
    {
        printf("%d\t",sum(num));
        num++;
    }
    return 0;
}
int sum(int n)
{
    if(n==1)
        return n;
    else
        return 1+sum(n-1);
}





