#include"util.h"
#include<stdio.h>

int main()
{
    //adding test casses for sarey functions.
    double a=45.0;
    printf("Testing degrees to radians:");
    printf("\nInput:%f degrees\n",a);
    printf("expected output:%f radians\n",degreesToRadians(a));
    printf("Actual output:%f radians\n",degreesToRadians(a));
    if(degreesToRadians(a)== 0.785)
    {