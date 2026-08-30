/*computer must win every time in this game*/
#include<stdio.h>
int main()
{
    int i=21;
    printf("the Player that picks the last match loses");
    while(i>0)
    {
        int pla,comp;
        printf("\nNumber of matchsticks remaining : %d",i);
        printf("\nenter the number of matchsticks you want to take between 1,2,3 or 4: ");
        scanf("%d",&pla);
        if(pla>4||pla<1)
           {
                printf("invalid input, choose between 1 and 4");
                continue;
           } 
        if(i-pla==0)
             printf("\nthe player lost");
        i=i-pla;
        comp=5-pla;
        i=i-comp;
        } 
    return 0;
}
