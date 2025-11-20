#include <stdio.h>

     int main() {
     int i, j;

     for (i = 1; i <= 9; i++) {
        printf("%d ", i);
     }
     printf("\n");


     for (i = 2; i <= 5; i++) {
         for (j = 1; j < i; j++) {
            printf("  ");
         }

         printf("%d", i);

         if (i != 5) {
            for (j = 1; j <= (2 * (5 - i)); j++) {
                printf("  ");
            }
            printf("%d", 10 - i);
        }

        printf("\n");
     }

     return 0;
 }

