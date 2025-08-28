#include<stdio.h>
int main()
{
    int a[5]= {1,2,3,4,5};

    int *p=a;

    printf("%d\n",*p++);//changing address not value,print 1
    printf("%d\n",*++p);//2 times increase,print 3
    printf("%d\n",*--p);// print 2
    p=&4[a]; // array starts from 0 index but why?
    printf("\n%d\n",*--p);
    printf("%d\n%d\n%d\n",*--p,*--p,*--p);
}

