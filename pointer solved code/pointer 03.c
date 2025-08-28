
#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5};
    int *ptr,i;
    ptr=&a[0];
    //ptr=a; both are same
    printf("Array elements: ");
    for(i=0; i<5; i++)
    {
        printf("%d",*ptr);

        ptr++;
    }
    printf("\n");
    printf("Adress of a=%p\n",*a);
     printf("Adress of ptr=%p\n",*ptr);

}
