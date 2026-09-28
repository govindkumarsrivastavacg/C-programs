//INCLUDING A CUSTOM LIBRARY TO FIND AREA AND PERIMETER OF A TRIANGLE,SQUARE,CIRCLE.

#include<stdio.h>
#include "areaperi.h"
int main()
{
        float r,a,b,h,Area_T,Area_C,Area_S,Peri_C,Peri_T,Peri_S,x,y,z;
        printf("Enter the radius of circle: ");
        scanf("%f",&r);
         printf("\nEnter the side of the square: ");
        scanf("%f",&a);
        printf("\nEnter the base of the triangle: ");
        scanf("%f",&b);
        printf("\nEnter the height of the triangle: ");
        scanf("%f",&h);
        printf("\nEnter the sides of the triangle: ");
        scanf("%f%f%f",&x,&y,&z);
        Area_C=AREAC(r);
        Peri_C=PERIC(r);
        Area_S=AREAS(a);
        Peri_S=PERIS(a);
        Area_T=AREAT(b,h);
        Peri_T=PERIT(x,y,z);
        printf("\nArea of the circle is %f",Area_C);
        printf("\nArea of the square is %f",Area_S);
        printf("\nArea of the triangle is %f",Area_T);
        printf("\nPerimeter of the circle is %f",Peri_C);
        printf("\nPerimeter of the square is %f",Peri_S);
        printf("\nPerimeter of the triangle is %f",Peri_T);
        return 0;
}