#include<stdio.h>
int main()
{
    float sal;
     int x,y;
    printf("Enter the salary: ");
    scanf("%f", &sal);
    y=(!(sal>=25000&&sal<=40000)?printf("clerk\n"):0);
    x=(sal>=15000&&sal<=25000?printf("accountant"):y);
    (sal>=25000&&sal<=40000?printf("Manager\n"):x);
    return 0;
}