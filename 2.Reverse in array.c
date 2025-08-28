#include <stdio.h>

int main() {

    int size;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    int arr[size],i,j;
    // Enter array elements
    printf("\nEnter the elements:\n ");
    for(i=0; i<size; i++)
    {
        printf("array [%d] index= ",i);
        scanf("%d",&arr[i]);
    }
    //The array is
    printf("\nThe Elements :\n ");
    for(i=0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }
    //Reverse process
    printf("\nReverse elements :\n ");
    for(i=size-1; i>=0; i--)
    {
        printf("%d ",arr[i]);
    }



    return 0;
}
