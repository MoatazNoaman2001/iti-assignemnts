#include <stdio.h>

int main() {
    char grade;
    printf("Enter the grade (A, B, C, D, E): ");
    scanf(" %c", &grade);

    switch (grade) {
        case 'A':
            printf("Excellent\n");
            break;
        case 'B':
            printf("Very Good\n");
            break;
        case 'C':
            printf("Good\n");
            break;
        case 'D':
            printf("Fair\n");
            break;
        case 'E':
            printf("Failed\n");
            break;
        default:
            printf("Invalid Grade\n");
    }

    return 0;
}
