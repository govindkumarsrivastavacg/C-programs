/*print all prime numbers between 1 and 300*/
#include<stdio.h>
int main()
{
    int num=1;
    printf("\nthe prime numbers between 1 and 300 are: \n1\t");
    for(num=1;num<=300;num++)
    {
        int i=2;
        for(i=2;i<=num;i++)
        {
            if(num%i==0)
                break;   
        }
        if(num==i)
            printf("%d\t",num);
    }
    return 0;
}