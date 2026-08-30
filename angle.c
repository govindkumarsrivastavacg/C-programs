#include<stdio.h>
#include<math.h>
int main()
{
    double angle;
    printf("Enter the angle in degrees: ");
    scanf("%lf", &angle);
    angle = angle * 3.14159 / 180; // Convert degrees to radians
    if(pow(sin(angle), 2) + pow(cos(angle), 2) == 1)
    
        printf("The trigonometric identity sin^2(angle) + cos^2(angle) = 1 holds true.\n");
    
    else
    
        printf("The trigonometric identity does not hold true.\n");
         
}