/*Natural log sum 7 times*/
#include<stdio.h>
#include<math.h>
int main()
{
    int i=2;
    float sum,x;
    printf("Enter the value of x: ");
    scanf("%f",&x);
    sum=(x-1)/x;
    for(i=2;i<=7;i++)
    {
        sum=sum+0.5*pow(((x-1)/x),i);
    }
    printf("\nThe sum of the first 7 terms is : %f",sum);
    return 0;
}