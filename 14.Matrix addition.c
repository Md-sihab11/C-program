/*14. Matrix Addition
Write a program to perform addition of two matrices.*/

#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size: ");
    scanf("%d",&size);
    int arr[size][size],arr1[size][size],i,j,sum;
    printf("\nEnter the elements:\n");
    for(i=0; i<size; i++)
    {
        for(j=0; j<size; j++)
        {
            printf("The [%d][%d] index: ",i,j);
            scanf("%d",&arr1[i][j]);
        }

    }
    printf("\nEnter the 2nd array elements:\n");
    for(i=0; i<size; i++)
    {
        for(j=0; j<size; j++)
        {
            printf("The [%d][%d] index: ",i,j);
            scanf("%d",&arr[i][j]);
        }

    }
    //print side
    printf("\nHere is the 1st arr elements:\n");
    for(i=0; i<size; i++)
    {
        for(j=0; j<size; j++)
        {
            printf("%d\t",arr1[i][j]);

        }

        printf("\n");

    }
    printf("\nHere is the 2nd arr elements:\n");
        for(i=0; i<size; i++)
    {
        for(j=0; j<size; j++)
        {
            printf("%d\t",arr[i][j]);

        }
        printf("\n");

    }
    printf("\nAddition of the two matrices:\n ");
    for(i=0; i<size; i++)
    {
        for (j=0; j<size; j++)
        {
            sum=arr1[i][j]+arr[i][j];
            printf("%d\t",sum);
        }
        printf("\n");
    }



}
