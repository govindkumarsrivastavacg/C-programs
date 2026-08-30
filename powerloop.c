/* Compute value of one number raised to another */
#include<stdio.h>
#include<math.h>
int main()
{
    int i,x,y,power;
    i=1;
    printf("enter the value of y and x");
    scanf("%d%d",&y,&x);
    i=1;
    power=1;
    while(i<=y)
    {
        power=power*x;
        i++;
    }
    printf("the answer is: %d",power);
    
    return 0;
}
