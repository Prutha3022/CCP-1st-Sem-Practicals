#include<stdio.h>

int main() {
int age;
printf("Enter your age :");
scanf("%d", &age);

if(age>=18) {
    printf("You are eligible for open savings account in bank.");
}
else {
    printf("You aRE NOT eligible yet.");
}

return 0;
}
