#include <stdio.h>

void main()
{
    int age, price = 300, dis = 0;
    char visitor;
    printf("Enter 'c' if your child is under or equal to 12\n");
    printf("Enter 'a' if person is above 18\n");
    printf("Enter 's' if person is above 60\n");
    scanf("%c", &visitor);
    switch(visitor)
    {
    case 'c' :
        printf("Under 12 children are available for free entry\n");
        break;
    case 'a' :
        printf("You have to pay full ticket price %d\n", price);
        break;
    case 's' :
        printf("You are eligible for 20%% discount\n");
        dis = 0.2*price;
        price = price - dis;
        printf("You have to pay %d\n", price);
        break;
    }

}

