#include <stdio.h>

int strLength(char str[]) {
    int len = 0;
    while (str[len] != '\0') len++;
    return len;
}

void strReverse(char str[]) {
    int len = strLength(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int strCompare(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i])
            return (str1[i] - str2[i]);
        i++;
    }
    return (str1[i] - str2[i]);
}

void strCopy(char dest[], char src[]) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}


void strConcat(char str1[], char str2[]) {
    int len1 = strLength(str1);
    int i = 0;
    while (str2[i] != '\0') {
        str1[len1 + i] = str2[i];
        i++;
    }
    str1[len1 + i] = '\0';
}

void toUpperCase(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
    }
}


void toLowerCase(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
    }
}

void capitalizeWords(char str[]) {
    int i = 0;
    int newWord = 1;
    while (str[i] != '\0') {
        if (str[i] == ' ') {
            newWord = 1;
        } else if (newWord && str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
            newWord = 0;
        } else {
            newWord = 0;
        }
        i++;
    }
}

int main() {
    char note1[500], note2[500], copy[500];
    int choice;

    printf("Enter your first note:\n");
    fgets(note1, sizeof(note1), stdin);

    int len = strLength(note1);
    if (note1[len - 1] == '\n') note1[len - 1] = '\0';

    do {
        printf("\n--- shivangi's Note Manager ---\n");
        printf("1. Calculate Length\n");
        printf("2. Reverse Note\n");
        printf("3. Compare Two Notes\n");
        printf("4. Copy Note\n");
        printf("5. Concatenate Notes\n");
        printf("6. Convert to Upper Case\n");
        printf("7. Convert to Lower Case\n");
        printf("8. Capitalize Each Word\n");
        printf("9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1:
                printf("Length of note: %d\n", strLength(note1));
                break;

            case 2:
                strReverse(note1);
                printf("Reversed Note: %s\n", note1);
                break;

            case 3:
                printf("Enter second note for comparison:\n");
                fgets(note2, sizeof(note2), stdin);
                len = strLength(note2);
                if (note2[len - 1] == '\n') note2[len - 1] = '\0';

                if (strCompare(note1, note2) == 0)
                    printf("Notes are identical.\n");
                else
                    printf("Notes are different.\n");
                break;

            case 4:
                strCopy(copy, note1);
                printf("Copied Note: %s\n", copy);
                break;

            case 5:
                printf("Enter second note to concatenate:\n");
                fgets(note2, sizeof(note2), stdin);
                len = strLength(note2);
                if (note2[len - 1] == '\n') note2[len - 1] = '\0';

                strConcat(note1, note2);
                printf("Concatenated Note: %s\n", note1);
                break;

            case 6:
                toUpperCase(note1);
                printf("Uppercase Note: %s\n", note1);
                break;

            case 7:
                toLowerCase(note1);
                printf("Lowercase Note: %s\n", note1);
                break;

            case 8:
                toLowerCase(note1);
                capitalizeWords(note1);
                printf("Capitalized Note: %s\n", note1);
                break;

            case 9:
                printf("Exiting... Happy writing, Meet!\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }

    } while (choice != 9);

    return 0;
}
