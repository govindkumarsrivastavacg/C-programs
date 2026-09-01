// Write a recursive function to obtain the first 25 numbers of a Fibonacci 
// sequence input by the user. In a Fibonacci sequence the sum of two successive terms 
// gives the third term. 

#include<stdio.h>
int fibo(int);
int main()
{
    int num;
    printf("Enter number:");
    scanf("%d",&num);
    for(int i=1;i<=25;i++)
    {
    printf("%d\t",fibo(num));
    num++;
    }
    return 0;
}
int fibo(int num)
{
    if(num==0||num==1)
    {
        return num;
    }
    else
        return (fibo(num-1)+fibo(num-2));
}
