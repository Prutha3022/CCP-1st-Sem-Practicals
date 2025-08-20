#include<stdio.h>

void main()
{
    float tc, tf, choice;

    printf("Enter 1 to convert from celsius to fahreneit and 2 to convert otherwise\n");
    scanf("%f", &choice);

    if(choice == 1)
        {
        printf("Enter Temperature in celsius: \n");
        scanf("%f", &tc);
        tf = tc*1.8+32;
        printf("Temperutre in fahrenheit is : %f\n", tf);
        }
    else if(choice == 2)
        {
        printf("Enter Temperature in fahrenheit: \n");
        scanf("%f", &tf);
        tc = (tf - 32) * 5/9;
        printf("Temperutre in celcius is : %f\n", tc);
        }
    else{
        printf("please enter a valid choice");
    }
}
