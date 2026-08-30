/*print all 24 hours of the day with right suffix*/
#include<stdio.h>
int main()
{
    int hr;
    char suff;
    for(hr=0;hr<24;hr++)
    {
        if(hr==0)
            printf("12 Midnight");
        else if(hr<12)
            printf("\n%d AM",hr);
        else if(hr==12)
            printf("\n12 Noon");
        else if(hr>12)
            printf("\n%d PM",hr);
    }
    return 0;
}