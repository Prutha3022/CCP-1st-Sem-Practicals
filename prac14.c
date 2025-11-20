#include<stdio.h>
int main()
{
    printf("my id no is : 25CE121\n");

    int balance=5000;
    int withdraw;
    while(1)
    {

    printf("enter the amount you want to withdraw: \n");
    scanf("%d",&withdraw);
    int currentbal;
    currentbal=balance-withdraw;


if(withdraw>=balance){printf("insufficient balance");}
printf("now your balance is:%d \n",currentbal);
break;
return 0;




}
}
