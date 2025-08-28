
#include<stdio.h>
int main()
{
    int x=9,y=11;
    int *ptr1,*ptr2,sum;
    ptr1=&x;
    ptr2=&y;

    sum=*ptr1+*ptr2; //forgotten to put the *
    printf("Result=%d\n",sum);

}
