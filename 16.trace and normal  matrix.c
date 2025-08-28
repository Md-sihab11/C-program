#include<stdio.h>
int main()
{
    int size;
    printf("Enter size: ");
    scanf("%d",&size);
    int arr[size][size],i,j,n,trace=0,normal=0;
    printf("Enter elements:");
    for(i=0; i<size; i++)
    {
        for(j=0; j<size; j++)
        {
            printf("\nThe [%d][%d]index= ",i,j);
             scanf("%d",&arr[i][j]);
        }

    }
     printf("\nPrint elements: \n");
    for(i=0; i<size; i++)
    {
        for(j=0; j<size; j++)
        {
            printf("%d\t",arr[i][j]);

        }
        printf("\n");

    }
    printf("Enter n for iteration: ");
    scanf("%d",&n);
    printf("\nTrace:\n");
    for(i=0; i<n; i++)
    {
        trace=trace+arr[i][i];

    }
    printf("%d",trace);

    printf("\nNormal\n");
    for(i=0; i<n; i++)
    {
        for(j=0;j<n;j++)
        {
            normal=normal+sqrt(arr[i][j]*arr[i][j]);
        }


    }



    printf("%d",normal);
}
