//calculate the mean and standard deviation

#include<stdio.h>
#include<math.h>
int main()
{
    int max,i;
    float sum=0,mean,sd,sum2=0;
    printf("Enter the number of elements the array would have: ");
    scanf("%d",&max);
    int arr[max];
    printf("\nEnter the elements of the array: ");
    for(i=0;i<max;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nThe array is: ");
    for(i=0;i<max;i++)
    {
        printf("%d\t",arr[i]);
    }
    for(i=0;i<max;i++)
    {
        sum=sum+arr[i];
    }
    mean=sum/max;
    for(i=0;i<max;i++)
    {
        sum2=sum2+pow((arr[i]-mean),2);
    }
    sd=pow((sum2/max),0.5);
    printf("\nThe Mean is: %f",mean);
    printf("\nThe Standard Deviation is: %f",sd);
    return 0;
}