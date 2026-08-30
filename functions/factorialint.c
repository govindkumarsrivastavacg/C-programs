/*Fuction to find factorial of any integer*/
#include<stdio.h>
int fact(int);
int main()
{
    int a,b;
    printf("Enter any positive integer:");
    scanf("%d",&a);
    if(a<0)
       {
        printf("Wish you were smarter and knew what positive integers were");
        return 1;
       }
    b=fact(a);
    printf("\nThe factorial of %d is %d",a,b);
    return 0;
}
int fact(int x)
{
    int y=1;
    for(int i=1;i<=x;i++)
    {
        y=y*i;
    }
    return (y);
}