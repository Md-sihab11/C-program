#include <stdio.h>

int main() {
    char str[] = "Hello, World!";
    int num = 42;

    // Using puts
    puts("Using puts:");
    puts(str);  // Prints the string with a newline

    // Using printf
    printf("Using printf:\n");
    printf("%s\n", str);  // Prints the string with a newline
    printf("The number is: %d\n", num);  // Prints a formatted string with an integer

    return 0;
}
