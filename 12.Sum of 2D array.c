
/*12. Sum of All Elements in a 2D Array
Write a program to calculate the sum of all elements in a 2D array.*/

#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size: ");
    scanf("%d",&size);
    int arr[size][size],i,j,sum=0;
    printf("\nEnter the elements:\n");
    for(i=0; i<size; i++)
    {
        for(j=0; j<size; j++)
        {
            printf("The [%d][%d] index: ",i,j);
            scanf("%d",&arr[i][j]);
        }

    }
    printf("\nHere is the 2D array elements:\n");
    for(i=0; i<size; i++)
    {
        for(j=0; j<size; j++)
        {
            printf("%d\t",arr[i][j]);

            sum=sum+arr[i][j];
        }
        printf("\n");

    }
    printf("\nSum of the elements =%d\n",sum);

}
