/*Multiplication Table*/
#include<stdio.h>
int main()
{
    int num;
    int i=1;
    printf("Enter the number: ");
    scanf("%d",&num);
    for(i=1;i<=10;i++)
    {
        printf("\n%d * %d = %d",num,i,num*i);
    }
    return 0;
}