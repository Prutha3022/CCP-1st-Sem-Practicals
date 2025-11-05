#include <stdio.h>

void main()
{
    int age;
    printf("Enter age\n");
    scanf("%d", &age);
    if(age <= 12 || age >= 60)
    {
        printf("You are eligible for free entry\n");
    }

    else
    {
        printf("You have to pay ticket fare for adult 300\n");

    }
}

