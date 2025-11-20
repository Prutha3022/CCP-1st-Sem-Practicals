#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    int mark, n;


    fp = fopen("marks.dat", "wb");
    if (fp == NULL) {
        printf("Error: Could not open file for writing.\n");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);


    printf("Enter marks for %d students:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Student %d marks: ", i + 1);
        scanf("%d", &mark);


        putw(mark, fp);
    }

    fclose(fp);


    fp = fopen("marks.dat", "rb");
    if (fp == NULL) {
        printf("Error: Could not open file for reading.\n");
        return 1;
    }

    printf("\nRetrieved Marks from File:\n");

    while (!feof(fp)) {
        mark = getw(fp);

        if (!feof(fp))
            printf("%d\n", mark);
    }

    fclose(fp);

    return 0;
}
