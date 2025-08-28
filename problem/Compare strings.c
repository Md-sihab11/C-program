#include<stdio.h>
#include<string.h>
int main()
{
    int value;
    char a[]="Hello";
    char b[]="Hello";

    value= strcmp(a,b);
    if(value==0)

        printf("same");

    else
        printf("Not same");



   // printf("%s\n",a);



}
