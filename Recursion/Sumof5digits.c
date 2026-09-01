// A 5-digit positive integer is entered through the keyboard, write a 
// recursive function to calculate sum of digits of the 5-digit number. 

#include<stdio.h>
int digsum(int);
int main()
{
    int n,sum;
    printf("Enter a 5 digit number: ");
    scanf("%d",&n);
    sum=digsum(n);
    printf("\n The sum of the 5 digit number is: %d",sum);
    return 0;
}
int digsum(int n)
{
    int s,rem;
    if(n!=0)
    {
        rem=n%10;
        s=rem + digsum(n/10);
    }
    else
        return 0;
    return s;
}