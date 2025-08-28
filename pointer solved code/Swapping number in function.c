
#include<stdio.h>
int  swapping(int *ptr1,int *ptr2 )
{
    int temp;
    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
}


int main()
{
    int x=9,y=11;
    int *ptr1,*ptr2;
    printf("\nBefore swapping X=%d and Y=%d\n",x,y);
    swapping(&x,&y);
    //swapping numbers



    printf("\nAfter swapping X=%d and Y=%d\n",x,y);

}
