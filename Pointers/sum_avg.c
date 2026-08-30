// Write a function that receives 5 integers and returns the sum, average 
// of these numbers. Call this function from main( ) 
// and print the results in main( ).
#include <stdio.h>
void stats(float *,float *);
int main()
{
    float sum,avg;
    stats(&sum,&avg);
    printf("\nThe sum of the numbers is %.2f \n The average of the number is %.2f",sum,avg);
    return 0;
}
void stats(float *sum,float *avg)
{
    float n1,n2,n3,n4,n5;
    printf("Enter 5 numbers: ");
    scanf("%f%f%f%f%f",&n1,&n2,&n3,&n4,&n5);
    *sum=n1+n2+n3+n4+n5;
    *avg=(n1+n2+n3+n4+n5)/5;
}