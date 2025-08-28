#include <stdio.h>
int main()
{
    int a[] = {10, 11, -1, 56, 67, 5, 4};
    int *p, *q;

    // Correct pointer initialization
    p = a;        // Pointer to the start of the array
    q = a + 3;    // Pointer to the 4th element of the array

    printf("%d %d %d\n", (*p)++, (*p)++, *(++p)); // Pointer arithmetic with dereferencing
    printf("%d\n", *p);                          // Print value at pointer p
    printf("%d\n", (*p)++);                      // Increment the value at pointer p
    printf("%d\n", (*p)++);                      // Increment again

    q--;                                         // Move q one step back
    printf("%d\n", (p + 2) - 2);                 // Pointer difference (no meaningful result in this context)
    printf("%d\n", *(p++ - 2) - 1);              // Dereference and perform arithmetic

    return 0;
}
