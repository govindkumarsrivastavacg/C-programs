/*Armstrong numbers between 1 and 500*/
#include<stdio.h>
int main()
{
    int i=1;
    int d1,d2,d3,anum;
    while(i<=500)
    {
        d1=i/100;
        d2=(i/10)%10;
        d3=i%10;
        anum=d1*d1*d1+d2*d2*d2+d3*d3*d3;
        if(i==anum)
           {
                printf("%d\n",anum);
           } 
        i++;
    }
    return 0;
}