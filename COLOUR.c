#include<stdio.h>
int main()
{
    int R,G,B;
    float C,M,Y,K,W;
    printf("enter the values of R,G,B(value should be between 0-255) : " );
    scanf("%d%d%d",&R,&G,&B);
    if(R==0&&B==0&&G==0)
    {
        C=0;
        M=0;
        Y=0;
        K=1;
        printf("CYAN=%f MAGENTA=%f YELLOW=%f BLACK=%f",C,M,Y,K);
    }
    else
    // Question mein white=max(red/255,blue/255,green/255) se mtlb hai r,b,g mein se jo sabse bada ho usey 255 se divide kardo.
     //finding the biggest of the blue,red and green
        {if(R>=G && R>=B)
            W=R/255.0;
        else if(G>=R && G>=B)
            W=G/255.0;
        else
            W=B/255.0;
        W=G/255.0;
        C=(W-R/255.0)/W;
        M=(W-G/255.0)/W;
        Y=(W-B/255.0)/W;
        K=1-W;
        printf("CYAN=%f MAGENTA=%f YELLOW=%f BLACK=%f",C,M,Y,K);
    }      
    return 0;
}