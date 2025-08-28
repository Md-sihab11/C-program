#include<stdio.h>
#include<math.h>

void swapping(int a, int b)
{
     int *ptr1=&a;
    int *ptr2=&b;
    int temp;

    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;

    printf("A=%d\nB=%d\n",*ptr1,*ptr2);

}


int main()
{
    int a=5,b=9;
    swapping(a,b);


}

