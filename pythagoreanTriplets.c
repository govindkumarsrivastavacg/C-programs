/*write all triplets with sides less than 30*/
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    printf("The pythagorean Triplets are: ");
    for(a=1;a<=30;a++)
    {
        for(b=a+1;b<=30;b++)
        {
            for(c=b+1;c<=30;c++)
            {
                if((a*a+b*b==c*c)||(a*a+c*c==b*b)||(c*c+b*b==a*a))
                {
                    printf("\n a= %d b= %d c= %d",a,b,c);
                }
                else
                    continue;
            }
        }
    }
    return 0;
}