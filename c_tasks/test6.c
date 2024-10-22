#include <stdio.h>
#include <string.h>

int main() {
    int num;
    char str[100];

    // Taking integer input
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Clearing the input buffer
    while (getchar() != '\n');

    // Taking string input
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove the newline character

    // Printing the inputs
    printf("Integer: %d\n", num);
    printf("String: %s\n", str);

    return 0;
}