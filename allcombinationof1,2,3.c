/*All possible combinations of 1,2,3*/
#include<stdio.h>
int main()
{
    int i=1,d1,d2,d3,num;
    printf("All possible combinations are: ");
    for(i=123;i<=321;i++)
    {
        d1=i/100;
        d2=(i/10)%10;
        d3=(i%100)%10;
        if(((d1==1)||(d1==2)||(d1==3))&&((d2==1)||(d2==2)||(d2==3))&&((d3==1)||(d3==2)||(d3==3))&&(d1!=d2)&&(d2!=d3)&&(d1!=d3))
            printf("\n %d",i);
    }
    
    return 0;
}