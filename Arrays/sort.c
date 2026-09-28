//  Implement the Insertion Sort algorithm shown in Figure 13.3 on a 
// set of 25 numbers. 
// Arrange items in ascending order

#include<stdio.h>
int main()
{
    int arr[25];
    int m,i,x,j;
    printf("Enter the elements of the array :\n ");
    for(int i=0;i<25;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nThe original array is: ");
    for(i=0;i<25;i++)
    {
        printf("%d\t",arr[i]);
    }
    //NOW STARTING TO SORT
    for(i=1;i<25;i++)
    {
        x=arr[i];
        m=i-1;
        j=i;
        while(m>=0 && arr[m]>x)
        {
            if(x<arr[m])
            {
                arr[j]=arr[m];
                j=j-1;
            }
            m=m-1;
        }
        arr[j]=x;
    }
    printf("\nThe sorted array is: ");
    for(i=0;i<25;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}