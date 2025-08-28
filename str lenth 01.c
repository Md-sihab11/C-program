#include <stdio.h>
#include <string.h>

void printStr(char str[])

{
    printf("String is : %s", str);
}

int main()
{
    // declare and initialize string
    char str[] = "Shakib mazumder";

    // print string by passing string
    // to a different function
    printStr(str);

    return 0;
}
