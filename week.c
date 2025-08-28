// An example program to demonstrate working
// of enum in C
#include<stdio.h>

enum week{Mon, Tue, Wed, Thur, Fri, Sat, Sun};//here week is variable

int main()
{
    enum week day;//here day is an object
    day = Wed;
    printf("%d",day);
    return 0;
}
