
#include<stdio.h>
int main()
{
    int a=5,b=9,temp;

    int *ptr1=&a;
    int *ptr2=&b;

    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;

    printf("A=%d\nB=%d\n",*ptr1,*ptr2);


}
