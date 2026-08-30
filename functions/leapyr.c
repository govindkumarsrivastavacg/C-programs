/*Any year is entered through the keyboard. Write a function to 
determine whether the year is a leap year or not.  */

#include<stdio.h>
int year(int);
int main()
{
    int yr,x;
    printf("Enter the year : ");
    scanf("%d",&yr);
    x=year(yr);
    return 0;
    
}
int year(int yr)
{
    if((yr%400==0)&&(yr%100==0))
        printf("\nThe year %d is a leap year",yr);
    else if((yr%100!=0)&&(yr%4==0))
         printf("\nThe year %d is a leap year",yr);
        else
             printf("\nThe year %d is not a leap year",yr);
}