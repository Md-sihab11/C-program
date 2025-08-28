/*11. Input and Display a 2D Array
Write a program to input a 2D array of size m x n
(where m and n are provided by the user) and display the array in matrix form.*/

#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size: ");
    scanf("%d",&size);
    int arr[size][size],i,j;
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
        }
        printf("\n");

    }

}
