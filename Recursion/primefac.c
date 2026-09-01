// A positive integer is entered through the keyboard, write a program to 
// obtain the prime factors of the number. Modify the function suitably to 
// obtain the prime factors recursively.

#include<stdio.h>
void prmfac(int,int);
int main()
{
    int n,fact;
    printf("\n Enter the number: ");
    scanf("%d",&n);
    printf("\n The prime factors of %d are:",n);
    prmfac(n,2);
    return 0;
}
void prmfac(int n,int i)
{
    if(i<=n)
    {
        if(n%i==0)
        {
            printf("\n%d",i);
            n=n/i;
        }
        else
            i++;
        prmfac(n,i);
    }
}