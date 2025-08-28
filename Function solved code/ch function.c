
#include<stdio.h>
char fun();
char fun()
{
   char c;
    printf("Enter char: ");
    scanf("%c",&c);

    return 'c';//beacuse its also a character thats why return c ok!!
}

int  main()
{
    int m=fun();
    printf("%c",m);


}

