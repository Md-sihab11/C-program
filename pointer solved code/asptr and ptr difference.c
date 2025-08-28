#include <stdio.h>
int main() {
    int a = 10;
    int *ptr = &a;  // ptr stores the address of a

    printf("Address of a: %p\n", ptr);
    printf("Address of a: %p\n", &a);   // Using ptr
    printf("Value of a: %d\n", *ptr);     // Using *ptr (dereference)
}
