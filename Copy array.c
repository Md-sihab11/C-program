#include<stdio.h>
int main()
{
    int arr1[5]={10,20,30,40,50},arr2[5];
    int i;

    printf("\nArray 1 element:");
    for(i=0; i<5; i++)
    {
        printf("%d ",arr1[i]);
    }
    //copy side

    for(i=0; i<5; i++)
    {
        arr2[i] = arr1[i];
    }

    // print side
     printf("\nArray 2 element:");
    for(i=0; i<5; i++)
    {
        printf("%d ",arr2[i]);
    }

    getch ();
}
