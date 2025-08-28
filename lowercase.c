
#include<stdio.h>
#include<string.h>
int main()
{
    int LOWER,UPPER;
    char a[20]="HELLO";


    LOWER=strlwr(a);
    printf("%s\n",LOWER);
    UPPER=strupr(a);

    printf("%s\n",UPPER);




}

