#include<stdio.h>

void main()
{
    float tc, tf;
    printf("Enter temperature in celsius\n");
    scanf("%f",&tc);
    tf = tc*1.8+32;
    printf("Temperutre in fahrenheit is : %f\n", tf);
}
