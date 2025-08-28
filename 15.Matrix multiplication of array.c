
/*15. Matrix Multiplication
Write a program to perform multiplication of two matrices.*/

#include<stdio.h>
int main()
{
    int m,n,p,q,sum;
    printf("Enter size: ");
    scanf("%d%d",&m,&n);
    int a[m][n],i,j;
    printf("Enter the A elements: ");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("Here is [%d][%d] index: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }


    printf("\nHere is the A elements:\n ");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    int b[p][q],c[m][q];
    printf("Enter size: ");
    scanf("%d%d",&p,&q);

    if(n!=p)
    {
        printf("matrix multiplication is not possible ");
        return 0;
    }
    //martix multiplication side
    else
    {


        int b[p][q],c[m][q];
        printf("\nEnter the B elements:\n ");
        for(i=0; i<p; i++)
        {
            for(j=0; j<q; j++)
            {
                printf("Here is [%d][%d] index: ",i,j);
                scanf("%d",&b[i][j]);
            }
        }
        printf("\nHere is the B elements:\n ");
        for(i=0; i<p; i++)
        {
            for(j=0; j<q; j++)
            {
                printf("%d\t",b[i][j]);
            }
            printf("\n");
        }

        //performing multiplication
        for (i=0; i<m; i++)
        {
            for(j=0; j<q; j++)
            {
                sum=0;
                for(int k=0; k<n; k++)
                {
                    sum= sum+a[i][j]*b[k][j];

                }
                c[i][j]=sum;

            }
        }
        // Display the result matrix
        printf("\nResultant Matrix C (AxB):\n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < q; j++)
            {
                printf("%d\t", c[i][j]);
            }
            printf("\n");
        }





    }

}
