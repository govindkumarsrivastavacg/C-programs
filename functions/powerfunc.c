/*Function to calculate the value of a raised to b*/
#include<stdio.h>
float power(float,float);
int main()
{
    float a,b,c;
    printf("Enter a and b:");
    scanf("%f%f",&a,&b);
    c=power(a,b);
    printf("\n %f to the power %f is %f ",a,b,c);
    return 0;
}
float power(float x,float y)
{
    float d=1.0;
    for(int i=1; i<=y;i++)
    {
        d=d*x;
    }
    return(d);
}
