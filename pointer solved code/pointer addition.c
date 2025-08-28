#include<stdio.h>
int main()
{
    int a=5,b=9,sum;
    int* ptr1=&a;
    int *ptr2=&b;
    sum=*ptr1+*ptr2;
    printf("Sum:%d\n",sum);


}

