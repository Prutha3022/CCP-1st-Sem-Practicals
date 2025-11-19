#include <stdio.h>

void main()
{
    int age, price = 300, dis = 0;

    printf("Enter age\n");
    scanf("%d", &age);

    if(age <= 12)
    {
        printf("You are eligible for free entry\n");
    }
    else if(age >= 60)
    {
        dis = 0.2*price;
        price = price - dis;
        printf("You are eligible for 20%% discount\n");
        printf("You have to pay: %d\n", price);
    }
    else
    {
        printf("You have to pay ticket fare for adult %d\n", price);

    }
}
