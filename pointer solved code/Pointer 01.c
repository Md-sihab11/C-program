
#include <stdio.h>

int main() {

    // An integer variable
    int a = 10;

    // Create a pointer to integer (declaration)
    int * ptr=&a;


     // Print the content of ptr
      printf("ptr = %p\n", ptr);
      printf("Adress=%u\n",&a); //duita mil thakbee


    // Get the value pointed by ptr (dereferencing)
    printf("*ptr = %d\n", *ptr);
    printf("ptr = %d\n",&ptr);

      return 0;
}
