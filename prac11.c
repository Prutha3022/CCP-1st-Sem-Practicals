#include<stdio.h>
int main()
{
    printf("my id is : 25CE121\n");
    int m;
    printf("enter student's marks:");
    scanf("%d",&m);
    (m>=90)?printf("grade A"):
    (m>=80 && m<90)?printf("grade B"):
    (m>=70 && m<80)?printf("grade C"):
    (m>=60 && m<70)?printf("grade D"):
    printf("fail");

}

