#include <stdio.h>
#include <string.h>

int combine();
int length();
int reverse();
int copy();
int compare();
void menu();

int main() {
    int option;
    int retry;

    do {
        menu();
        printf("Choose an option: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                combine();
                break;

            case 2:
                length();
                break;

            case 3:
                reverse();
                break;

            case 4:
                copy();
                break;

            case 5:
                compare();
                break;

            case 6:
                // exit
                printf("Exiting program....\n");
                return 0;

           
          default:
                printf("Invalid option. Please choose a valid option.\n");
        }

        printf("Do you want to retry? (1 for Yes / 0 for No): ");
        scanf("%d", &retry);
    } while (retry == 1);

    return 0;
}

void menu() {
    printf("\nChoose an option: \n");
    printf("1] Combine two strings\n");
    printf("2] Measure length of a string\n");
    printf("3] Reverse a string\n");
    printf("4] Copy a string to another string\n");
    printf("5] Compare two strings\n");
    printf("6] Exit\n");
}

int combine() {
    char s1[100], s2[100];

    printf("Enter value of string 1: ");
    scanf("%s", s1);

    printf("Enter value of string 2: ");
    scanf("%s", s2);

    strcat(s1, s2);

    printf("\n\vCombined string: %s\n\v\v", s1);

    return 0;
}

int length() {
    char s[100];

    printf("Enter a string to measure: ");
    scanf("%s", s);

    printf("\v\vThe number of characters in the string is:\t %d\n", strlen(s));
printf("\v\v\v");
    return 0;
}

int reverse() {
    char s[100];

    printf("Enter a string to reverse: ");
    scanf("%s", s);

    int length = strlen(s);
printf("\v\v");
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", s[i]);
    }

    printf("\n\v\v\v");

    return 0;
}

int copy() {
    char s1[100], s2[100];

    printf("Enter value of string to copy from: ");
    scanf("%s", s1);

    strcpy(s2, s1);

    printf("Copied string: \n%s\n", s2);
printf("\v\v\v");
    return 0;
}

int compare() {
    char s1[100], s2[100];

    printf("Enter value of string 1: ");
    scanf("%s", s1);

    printf("Enter value of string 2: ");
    scanf("%s", s2);

    int result = strcmp(s1, s2);

    if (result == 0) {
        printf("Both strings are equal.\n");
    } else {
        printf("Strings are not equal.\n");
    }
printf("\v\v\v");
    return 0;
}
