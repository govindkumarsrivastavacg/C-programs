/*Define a function to convert any given year into its Roman equivalent. 
Use these Roman equivalents for decimal numbers: 1 – I, 5 – V, 10 – X, 
50 – L, 100 – C, 500 – D, 1000 – M. 
Example: 
Roman equivalent of 1988 is mdcccclxxxviii. 
Roman equivalent of 1525 is mdxxv. 
*/


#include<stdio.h>
int roman(int,int,char);
int main()
{
    int yr;
    printf("Enter the year: ");
    scanf("%d",&yr);
    yr=roman(yr,1000,'m');
    yr=roman(yr,500,'d');
    yr=roman(yr,100,'c');
    yr=roman(yr,50,'l');
    yr=roman(yr,10,'x');
    yr=roman(yr,5,'v');
    yr=roman(yr,1,'i');
    return 0;
}
int roman(int y,int k, char c)
{
    int i,j;
    j=y/k;
    for(i=1;i<=j;i++)
    {
        printf("%c",c);
    }
    return(y%k);
}