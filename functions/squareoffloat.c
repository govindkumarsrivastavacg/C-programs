/*Function to obtain square of a floating type number*/
#include<stdio.h>
float square(float);
int main()
{
    float a,b;
    printf("enter any floating number: ");
    scanf("%f",&a);
    b=square(a);
    printf("float of %f is: %f",a,b);
    return 0;
}
float square(float value)
{
    return (value * value);
}