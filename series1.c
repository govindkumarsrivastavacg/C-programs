/*Write a program to add first seven terms of the following series using a 
for loop. 
1/1!+2/2!+3/3!+.....*/
#include<stdio.h>
int main()
{
    int i=1;
    int j=1;
    float fact=1.0;
    float sum=0.0;
    for(i=1;i<=7;i++)
    {
        for(j=1;j<=i;j++)
        {
            fact=fact*j;
        }
        sum=sum+i/fact;
    }
    printf("The sum of the first seven terms is: %f",sum);
    return 0;
}