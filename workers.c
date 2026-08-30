/*worker overtime pay calculator*/
#include <stdio.h>
int main()
{
    int i,hours;
    float otp;
   
    i=1;
    while(i<=10)
    {
         printf("enter the number of hours worked");
         scanf("%d",&hours);
        if(hours>40)
            otp=(hours-40)*120.0;
        else
            otp=0;
        printf("overtime payment= %f\n",otp);
        i++;
    }
    return 0;
}