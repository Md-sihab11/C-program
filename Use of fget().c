#include <stdio.h>

int main() {
    char str[20];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Read up to 19 characters
    printf("You entered: %s", str);

    return 0;
}
