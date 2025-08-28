
#include <stdio.h>

int main() {
    // Write C code here
    int size;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    int arr[size],i,j;
    // Enter array elements
    printf("\nEnter the elements:\n ");
    for(i=0; i<size; i++)
    {

        scanf("%d",&arr[i]);
    }
    int max=arr[0],min=arr[0];
    for(j=0; j<size; j++)
    {
        if(max<arr[j])
        {
            max=arr[j];
        }
        else if(min>arr[j])
        {
            min=arr[j];
        }

    }
    printf("Maximum value=%d\n",max);
     printf("Minimum value=%d\n",min);

    return 0;
}
