// There are three pegs labeled A, B and C. Four disks are placed on 
// peg A. The bottom-most disk is largest, and disks go on decreasing 
// in size with the topmost disk being smallest. The objective of the 
// game is to move the disks from peg A to peg C, using peg B as an 
// auxiliary peg. The rules of the game are as follows: 
// (1) Only one disk may be moved at a time, and it must be the top 
// disk on one of the pegs. 
// (2) A larger disk should never be placed on the top of a smaller 
// disk. 
// Write a program to print out the sequence in which the disks should 
// be moved such that all disks on peg A are finally transferred to peg 
// C.


#include<stdio.h>
int a=4,b=0,c=0;
int peg(int);
int main()
{
    int d=1;
    int sum;
    sum=peg(d);
    printf("The value of a is now:%d\n The value of b is now:%d\nThe value of c is now:%d",a,b,c);
    return 0;
}
int peg(int d)
{
    int i=d-1;
    if(d==0)
        return 1;
    else if(d<=4&&d>-1)
        {
            b=a-i;
            c=b;
            a=a-b;
            b=b-c;

        }
    return (d-1);
}


