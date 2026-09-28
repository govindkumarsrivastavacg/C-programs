// An array contains 10 integers. Receive the number to be searched in the 
// array as input. Write a program to search this number in the array and 
// display the number of times it occurs in the array.

#include<stdio.h>
int main()
{
    int p[10];
    int i,n;
    int count=0;
    printf("Enter the elements of the array: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&p[i]);
    }
    printf("\nThe original array is: ");


    for(i=0;i<10;i++)
    {
        printf("%d\t",p[i]);
    }

    printf("\nEnter the number you want to count: ");
    scanf("%d",&n);

    for(int i=0;i<10;i++)
    {
        if(p[i]==n)
            count++;
    }
    printf("\n The number of times %d appeared on the array is: %d",n,count);
    return 0;
}