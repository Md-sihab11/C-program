#include <stdio.h>

int main()
{
    int arr[2][3],i,j;
    printf("Enter those elements: ");
    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nThe matrix is:\n ");
    for(i=0; i<2; i++)
    {
         printf("\t"); // just for sajanor jonno
        for(j=0; j<3; j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    printf("\nThe transpose matrix is:\n ");
    for(j=0; j<3; j++)
    {
        printf("\t");
        for(i=0; i<2; i++) // ij = ji matrix transpose
        {
            printf("%d\t",arr[j][i]);
        }
        printf("\n");
    }



}





