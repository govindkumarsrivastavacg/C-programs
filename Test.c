#include<stdio.h>
int main()
{
    int a,b,c,x,greatest;
    printf("enter 3 numbers : ");
    scanf("%d%d%d",&a,&b,&c);
    x=(a>b?a:b);
    greatest=(x>c?x:c);
    printf("%d",greatest);
    return 0;
}