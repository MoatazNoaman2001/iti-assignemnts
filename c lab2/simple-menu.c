#include <stdio.h>

int main() {
    int choice;

    printf("Menu:\n");
    printf("1. Start\n");
    printf("2. Settings\n");
    printf("3. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("You selected Start.\n");
            break;
        case 2:
            printf("You selected Settings.\n");
            break;
        case 3:
            printf("You selected Exit.\n");
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
