// Write macro definitions for the following: 
// 1. To find arithmetic mean of two numbers. 
// 2. To find absolute value of a number. 
// 3. To convert an uppercase alphabet to lowercase. 
// 4. To obtain the biggest of three numbers.

#include<stdio.h>
#define MEAN(a,b)(((a) + (b)) / 2.0f)
#define ABSOLUTE(x)(((x) >= 0) ? (x) : -(x))
#define TO_LOWER(ch) (((ch) >= 'A' && (ch) <= 'Z') ? ((ch) + ('a' - 'A')) : (ch))
#define BIG(a,b,c)(((a) > (b)) ? (((a) > (c)) ? (a) : (c)) : (((b) > (c)) ? (b) : (c)))
int main()
    {
        int a,b,x,y,z,abso,big;
        float mean;
        char c,n;
        printf("\n Enter the values to find mean");
        scanf("%d%d",&a,&b);
        mean=MEAN(a,b);
        printf("\n The mean is: %f",mean);
        printf("\n Enter the value: ");
        scanf("%d",&x);
        abso=ABSOLUTE(x);
        printf("\nThe absolute value of %d is %d",x,abso);
        printf("\nEnter an uppercase alphabet: ");
        scanf(" %c", &c);
        n = TO_LOWER(c);
        printf("\nThe lowercase alphabet is: %c", n);
        printf("\n Enter 3 numbers: ");
        scanf("%d%d%d",&x,&y,&z);
        big=BIG(x,y,z);
        printf("\n The biggest of 3 numbers is: %d",big);
        return 0;
    }

