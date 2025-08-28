#include<stdio.h>
int main()
{
    int size;
    printf("Enter size: ");
    scanf("%d",&size);
    int arr[size][size],i,j,upper=1;
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


    for(i=0; i<size; i++)
    {
        for(j=0; j<i; j++)
        {

            if(arr[i][j]!=0)
            {
                upper=0;
                break;//index equal hole

            }
            if(upper==0)
                break;

        }
        printf("\n");

    }
    if(upper==1)
    {
        printf("It is an upper trianguler matrix");
    }
    else{
        printf("It is not an upper trianguler matrix");
    }
    getch ();
}

