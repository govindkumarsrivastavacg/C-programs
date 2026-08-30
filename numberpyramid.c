#include<stdio.h>
int main()
{
    int index=4;
    int count_number=1;
    int num=1;
    for(int i=0;i<4;i++)
    {
        int count=count_number;
        int starting_index=index-1;
        index=starting_index;
        for(int j=0;j<7;j++)
        {
            if(j==starting_index)
            {
                printf("%d",num);
                count--;
                num++;
            }
            else if (j>starting_index&&(count>0&&(j-starting_index)%2==0))
            {
                printf("%d",num);
                count--;
                num++;
            }
            else
                printf(" ");
        }
        printf("\n");
        count_number++;
    }
    return 0;
}