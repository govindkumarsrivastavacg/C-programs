/*find the range(largest-smallest number)*/
#include<stdio.h>
int main()
{
    float small,large,num,range;
    int i,n;
    i=1;
    printf("enter the number of numbers you want:");
    scanf("%d",&n);
    if(n<=0){
     printf("enter a positive element");
        return 1;
    }
    printf("enter a number: ");
    scanf("%f",&num);
    small=num;
    large=num;
    while(i<n)
    {
        printf("Enter another number: ");
        scanf("%f",&num);
        if(num<small)
            small=num;
        else if(num>large)
            large=num;
        i++;
    }
    range=large-small;
    printf("the range is: %f",range);
    return 0;
}