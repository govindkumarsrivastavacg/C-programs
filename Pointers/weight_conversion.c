// Define a function that receives weight of a commodity in Kilograms 
// and returns the equivalent weight in Grams, Tons and Pound

#include<stdio.h>
void weight(float *gram, float *tons, float *pounds);
int main()
    {
        float w,gram,tons,pounds;
        weight(&gram,&tons,&pounds);
        printf("\n The weight in grams=%f \n The weight in tons=%f \n The weight in pounds=%f",gram,tons,pounds);
        return 0;
    }
    void weight(float *gram,float *tons,float *pounds)
    {
        float w;
        printf("\n Enter the weight in KG: ");
        scanf("%f",&w);
        *gram=w*1000;
        *tons=w/1000;
        *pounds=w*2.2;
    }