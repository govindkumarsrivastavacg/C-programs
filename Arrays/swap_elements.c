//Write a program that interchanges elements at odd position with 
//elements at even position in an array of 10 elements.
#include<stdio.h>
int main()
{
    int i,t,x;
    int p[10];
    printf("Enter the elements of the list: \n");
    for(x=0;x<=9;x++)
    {
        scanf("%d",&p[x]);
    }
    printf("\nThe original list is: ");
    for(i = 0; i < 10; i++) 
    {
        printf("%d\t", p[i]);
    }
    printf("\nThe new list is: ");
    for(i=0;i<=9;i+=2)
    {
        t=p[i];
        p[i]=p[i+1];
        p[i+1]=t;
    }
   
    for(i=0;i<=9;i++)
    {
        printf("%d\t",p[i]);
    }
    return 0;
}