/*A positive integer is entered through the keyboard. Write a function 
to obtain the prime factors of this number. 
*/

#include<stdio.h>
void primeFactor(int);
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    primeFactor(num);
    return 0;
}
void primeFactor(int number)
{
    int i;

    for(i = 2; i <= number; i++)
    {
        while(number % i == 0)
        {
            printf("%d ", i);
            number = number / i;
        }
    }
}