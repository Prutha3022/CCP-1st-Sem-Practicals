//Ask user input for height and weight and calculate the BMI

#include<stdio.h>

void main()
{
    float height,weight,bmi;

    printf("Please enter weight in kilograms: ");
    scanf("%f", &weight);
    printf("Please enter height in meters: ");
    scanf("%f", &height);

    bmi = weight/(height*height);
    printf("\nYour Body Mass Index (BMI) is: %f", bmi);
}
