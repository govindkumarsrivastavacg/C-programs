// Write a program to copy the contents of a 5-element integer array into 
// another array in reverse order.

#include<stdio.h>
int main()
{
    int i;
    int p[5],q[5];
    printf("Enter the elements of the array: ");
    for(int x=0;x<=4;x++)
    {
        scanf("%d",&p[x]);
    }
    printf("\nThe original array is: ");
    for(int x=0;x<=4;x++)
    {
        printf("%d\t",p[x]);
    }
    for(i=0;i<=4;i++)
    {
        q[i]=p[4-i];
    }
    printf("\nThe new array is: ");
    for(i=0;i<=4;i++)
    {
        printf("%d\t",q[i]);
    }
    return 0;
}