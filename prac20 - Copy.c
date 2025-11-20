#include <stdio.h>

int main() {
    int n;
    printf("Enter total number of participants: ");
    scanf("%d", &n);

    int ids[n - 1];
    int total = 0, sum = 0;

    printf("Enter %d participant IDs: ", n - 1);
    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &ids[i]);
    }


    for (int i = 1; i <= n; i++) {
        total += i;
    }

    for (int i = 0; i < n - 1; i++) {
        sum += ids[i];
    }


    int missing = total - sum;

    if (missing == 0)
        printf("No ID is missing.\n");
    else
        printf("Missing participant ID is: %d\n", missing);

    return 0;
}
