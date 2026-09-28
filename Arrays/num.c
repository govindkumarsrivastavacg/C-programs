// Twenty-five numbers are entered from the keyboard into an array. 
// Write a program to find out how many of them are positive, how 
// many are negative, how many are even and how many odd. 

#include<stdio.h>
int main()
{
    int arr[25];
    int i;
    int pos_cnt=0,neg_cnt=0,odd_cnt=0,even_cnt=0;
    printf("Enter the elements of the list: ");
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
        if(arr[i]>0)
        {
            pos_cnt+=1;
        }
        if(arr[i]<0)
        {
            neg_cnt+=1;
        }
        if(arr[i]%2==0)
        {
            even_cnt+=1;
        }
        if(arr[i]%2!=0)
        {
            odd_cnt+=1;
        }
    }
    printf("\n The number of positive numbers are: %d",pos_cnt);
    printf("\n The number of negative numbers are: %d",neg_cnt);
    printf("\n The number of odd numbers are: %d",odd_cnt);
    printf("\n The number of even numbers are: %d",even_cnt);
}