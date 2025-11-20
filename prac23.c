#include <stdio.h>

int main() {
    int prices1[] = {20, 25, 15, 30, 10, 50};
    int prices2[] = {10, 8, 6, 4, 2};
    int prices3[] = {100, 180, 260, 310, 40, 535, 695};
    int prices4[] = {30, 20, 25, 40, 25, 50, 35};
    int prices5[] = {5, 5, 5, 5, 5};

    int n, minPrice, maxProfit, i;

    n = 6;
    minPrice = prices1[0];
    maxProfit = 0;
    for (i = 1; i < n; i++) {
        if (prices1[i] < minPrice)
            minPrice = prices1[i];
        else if (prices1[i] - minPrice > maxProfit)
            maxProfit = prices1[i] - minPrice;
    }
    printf("Test Case 1 Profit: %d\n", maxProfit);

    n = 5;
    minPrice = prices2[0];
    maxProfit = 0;
    for (i = 1; i < n; i++) {
        if (prices2[i] < minPrice)
            minPrice = prices2[i];
        else if (prices2[i] - minPrice > maxProfit)
            maxProfit = prices2[i] - minPrice;
    }
    printf("Test Case 2 Profit: %d\n", maxProfit);


    n = 7;
    minPrice = prices3[0];
    maxProfit = 0;
    for (i = 1; i < n; i++) {
        if (prices3[i] < minPrice)
            minPrice = prices3[i];
        else if (prices3[i] - minPrice > maxProfit)
            maxProfit = prices3[i] - minPrice;
    }
    printf("Test Case 3 Profit: %d\n", maxProfit);


    n = 7;
    minPrice = prices4[0];
    maxProfit = 0;
    for (i = 1; i < n; i++) {
        if (prices4[i] < minPrice)
            minPrice = prices4[i];
        else if (prices4[i] - minPrice > maxProfit)
            maxProfit = prices4[i] - minPrice;
    }
    printf("Test Case 4 Profit: %d\n", maxProfit);

    n = 5;
    minPrice = prices5[0];
    maxProfit = 0;
    for (i = 1; i < n; i++) {
        if (prices5[i] < minPrice)
            minPrice = prices5[i];
        else if (prices5[i] - minPrice > maxProfit)
            maxProfit = prices5[i] - minPrice;
    }
    printf("Test Case 5 Profit: %d\n", maxProfit);

    return 0;
}

