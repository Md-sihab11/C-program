#include<stdio.h>
int main()
{
    int size;
    printf("Enter size: ");
    scanf("%d",&size);
    int arr[size][size],i,j,lower=1;
    for(i=0; i<size; i++)
    {
        for(j=0; j<size; j++)
        {
            printf("The [%d][%d] index: ",i,j);
            scanf("%d",&arr[i][j]);
        }

    }
    printf("\nThe matrix: \n");
    for(i=0; i<size; i++)
    {
        for(j=0; j<size; j++)
        {
           printf("%d ",arr[i][j]);
        }
        printf("\n");

    }


     // Check for lower triangular matrix
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)

        {
            if (arr[i][j] != 0)
            {
                lower = 0;

                break;
            }
        }
        if (lower == 0)

            break;
    }
    if(lower==1)
    {
        printf("It is an Lower trianguler matrix");
    }
    else{
        printf("It is not an Lower trianguler matrix");
    }
    getch ();
}

