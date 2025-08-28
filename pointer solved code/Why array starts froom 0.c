#include<stdio.h>
int main()
{
    int a[5]= {1,2,3,4,5};

    int *p=a;
    printf("%d\n",*p);//1
    printf("%d\n",*p+1);//2
    printf("%d\n",*p+2);//3


}

