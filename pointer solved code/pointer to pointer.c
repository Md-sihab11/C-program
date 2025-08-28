#include<stdio.h>
int main()
{
    int a=5;
    int *p=&a;
    int **q=&p;
    int ***r=&q;
    printf("p=%d\nq=%d\n",*p,*(*q));//*1st it addresses stored and then *the value stored,print 5 5
    printf("R=%d\n",*(*(*r)));//1st q adsress,q vitore p adress,p vitore a adress,print 5

   //incremented or changeable value
    *p=10;
    printf("p=%d\n",*p);
    **q=9;
    printf("q=%d\n",*(*q));
    ***r=7;
    printf("r=%d\n",*(*(*r)));

//different side
    *p=10;
    **q=9;
    ***r=7;
     printf("p=%d\nq=%d\nr=%d\n",*p,*(*q),*(*(*r)));//print will be 7


}
