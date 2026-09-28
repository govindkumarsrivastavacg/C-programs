// If an array arr contains n elements, then write a program to check if 
// arr[ 0 ] = arr[ n - 1 ], arr[ 1 ] = arr[ n - 2 ] and so on.

#include<stdio.h>
int main()
{
    int max;
    int i,x;
    int count=0;
    printf("Enter the number of elements the array would have: ");
    scanf("%d",&max);
    int arr[max];
    printf("\n Enter the elements of the array: ");
    for(i=0;i<max;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n The array is: ");
    for(i=0;i<max;i++)
    {
        printf("%d\t",arr[i]);
    }
    for(i=0;i<max;i++)
    {
        if(arr[i]==arr[max-i-1])
        {
            count+=1;
        }
    }
    if(count==max)
    {
        printf("\nIt does follow the pattern");
    }
    else
        printf("\nIt does not follow the pattern");
    return 0;
}