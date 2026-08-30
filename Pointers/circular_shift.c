// Given three variables x, y, z, write a function to circularly shift their 
// values to right. In other words, if x = 5, y = 8, z = 10, after circular 
// shift y = 5, z = 8, x =10. Call the function with variables a, b, c to 
// circularly shift values.  


#include<stdio.h>
void shift(int *a, int *b, int *c);
int main()
{
    int a,b,c;
    printf("\nEnter the numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    shift(&a,&b,&c);
    printf("\nAfter shift1, the numbers are a=%d b=%d c=%d",a,b,c);
    shift(&a,&b,&c);
    printf("\n After shift2, the numbers are a=%d b=%d c=%d",a,b,c);
    return 0;
}
void shift(int *a,int *b, int *c)
{
    int x,y,z;
    x=*a;
    y=*b;
    z=*c;
    *b=x;
    *c=y;
    *a=z;
}    