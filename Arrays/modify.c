// Write a program which performs the following tasks: 
// Initialize an integer array of 10 elements in main( ) 
// Pass the entire array to a function modify( ) and multiply each element of the array by 3

#include<stdio.h>
void modify(int *,int);
int main()
{
    int arr[10];
    int i,sum;
    int *p;
    printf("Enter the elements of the array: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nThe original array is: ");
    for(i=0;i<10;i++)
    {
        printf("%d\t",arr[i]);
    }
    modify(&arr[0],10);
    printf("\n the modified array is: ");
    for(i=0;i<10;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}
void modify(int *p,int n)
{
    for(int i=0;i<n;i++)
    {
        *p=*p*3;
        p++;
    }
}