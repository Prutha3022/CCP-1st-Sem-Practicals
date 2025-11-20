#include <stdio.h>

union book {
    int accesion_no;
    char title[50];
    char authorname[50];
    float price;
    int issued_flag;
};

int main() {
    union book b;

    printf("Enter Accession Number: ");
    scanf("%d", &b.accesion_no);
    printf("Accession Number: %d\n", b.accesion_no);

    printf("Enter Title: ");
    scanf(" %[^\n]", b.title);
    printf("Title: %s\n", b.title);

    printf("Enter Author Name: ");
    scanf(" %[^\n]", b.authorname);
    printf("Author: %s\n", b.authorname);

    printf("Enter Price: ");
    scanf("%f", &b.price);
    printf("Price: %.2f\n", b.price);

    printf("Enter Status (1 = issued, 0 = available): ");
    scanf("%d", &b.issued_flag);

    if (b.issued_flag == 1)
        printf("Status: Issued\n");
    else
        printf("Status: Available\n");

    return 0;
}
