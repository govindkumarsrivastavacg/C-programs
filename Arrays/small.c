//  Write a program to find the smallest number in an 
// array of 25 integers. 

#include<stdio.h>
int main()
{
    int arr[25];
    int i,j,count=0;
    int n=24;
    printf("Enter the elements of the array: ");
    for(i=0;i<25;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nThe array is: ");
    for(i=0;i<25;i++)
    {
        printf("%d\t",arr[i]);
    }   
    for(i=0;i<25;i++)
    {
        n=24;
        count=0;
        while(n>=0)
        {
            if(arr[i]<=arr[n])
            {
                count=count+1;
            }
            n=n-1;
        }
        if(count==25)
        {
            printf("\nThe smallest number is: %d",arr[i]);
            break;
        }
    }

    return 0;
}