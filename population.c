/*Population of the last decade*/
#include<stdio.h>
int main()
{
    int pop=100000,i=10;
    printf("The folowing is the population of the last decade :");
    printf("\n%d",pop);
    for(i=10;i>=2;i--)
    {
        pop=pop-(pop/10);
        printf("\n%d",pop);
    }
    return 0;
}