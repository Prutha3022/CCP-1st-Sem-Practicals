#include<stdio.h>

void main()
{
    float tc, tf, tk, choice;

    printf("Enter 1 to convert from celsius to fahrenheit\n");
    printf("Enter 2 to convert from fahrenheit to celsius\n");
    printf("Enter 3 to convert from celsius to kelvin\n");
    printf("Enter 4 to convert from kelvin to celsius\n");
    printf("Enter 5 to convert from fahreneit to kelvin\n");
    printf("Enter 6 to convert from kelvin to fahreneit\n");

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
    else if(choice == 3)
        {
        printf("Enter Temperature in celsius: \n");
        scanf("%f", &tc);
        tk = tc + 273.15;
        printf("Temperutre in kelvin is : %f\n", tk);
        }
    else if(choice == 4)
        {
        printf("Enter Temperature in kelvin: \n");
        scanf("%f", &tk);
        tc = tk - 273.15;
        printf("Temperutre in celsius is : %f\n", tc);
        }
    else if(choice == 5)
        {
        printf("Enter Temperature in fahrenheit: \n");
        scanf("%f", &tf);
        tk = (tf + 459.67)*5/9 ;
        printf("Temperutre in kelvin is : %f\n", tk);
        }
    else if(choice == 6)
        {
        printf("Enter Temperature in kelvin: \n");
        scanf("%f", &tk);
        tf = (tk - 273.15)*(1.8) + 32;
        printf("Temperutre in fahrenheit is : %f\n", tf);
        }
    else{
        printf("please enter a valid choice");
    }
}
