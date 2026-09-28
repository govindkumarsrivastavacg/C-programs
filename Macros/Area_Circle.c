/*Area of a circle using macros*/
#include<stdio.h>
#define AREA(x)(3.14*x*x)
int main()
{
    float r,a;
    printf("Enter the radius: ");
    scanf("%f",&r);
    a=AREA(r);
    printf("\nArea of the circle is %f",a);
    return 0;
}