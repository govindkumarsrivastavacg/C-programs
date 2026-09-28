//trying pragma macros
#include<stdio.h>
void func1();
void func2();
void func3();
#pragma startup func2()
#pragma exit func3()
#pragma startup func1()
int main()
{
    printf("\nInside main");
    return 0;
}
void func1()
{
    printf("\nInside function 1");
}
void func2()
{
    printf("\n Inside function 2");
}
void func3()
{
    printf("\n Inside function 3");
}