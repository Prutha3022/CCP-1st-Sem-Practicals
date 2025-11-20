#include <stdio.h>
#include<unistd.h>

int main() {
    int seconds;


    printf("Enter starting number of seconds: ");
    scanf("%d", &seconds);


    if (seconds < 0) {
        printf("Please enter a non-negative value.\n");
        return 1;
    }


    while (seconds >= 0) {
        printf("%d\n", seconds);
        sleep(1);
        seconds--;
    }


    printf("Countdown completed!\n");

    return 0;
}
