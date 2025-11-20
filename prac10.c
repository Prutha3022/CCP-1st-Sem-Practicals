#include<stdio.h>
int main()
{
    printf("my id no is 25ce121\n");
    int choice,price=0;
    printf("----welcome to foodies restaurant-----\n");
    printf("---MENU---\n");
    printf("1).Burger -₹150\n");
    printf("2).Pizza -₹200\n");
    printf("3).Pasta -₹120\n");
    printf("4).sandwich -₹100\n");
    printf("5).frenchfries -₹80\n");
    printf("6).press 0 to exit\n");


    while(1)

    {
        printf("enter your choice (0 to exit) : \n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("added burger to your order\n");
            price+= 150;
            break;
        case 2:
            printf("added pizza to your order\n");
            price+= 200;
            break;
        case 3:
            printf("added pasta to your order\n");
            price+= 120;
            break;
        case 4:
            printf("added sandwich to your order\n");
            price+= 100;
            break;
        case 5:
            printf("added frenchfries to your order\n");
            price+= 80;
            break;
        case 0:
            printf("thank you");
            printf("your total is: %d\n",price);
            return 0;
        default:
            printf("invalid input");

        }
    }

}
