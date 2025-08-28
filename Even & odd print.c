
#include<stdio.h>
int main()
{
    int size,evencount=0,oddcount=0;
    printf("Enter numbers: ");
    scanf("%d",&size);
    int even[size],odd[size];
    int a[size],i;

    printf("\nEnter elements:\n");
    for(i=0; i<size; i++)
    {
        printf("array [%d] index= ",i);
        scanf("%d",&a[i]);
    }
    printf("\nEven or odd!: \n");
    for(i=0; i<size; i++)
    {
        if(a[i]%2==0)
        {
            even[evencount++]=a[i];


        }
        else
        {
            odd[oddcount++]=a[i];

        }
    }

// Here you have take a look
    printf("Even num:\n");
    for (i=0; i<evencount; i++)
    {
        printf("%d\n",even[i]);// even print hobe
    }

    //here is the odd section
    printf("odd num:\n");
    for (i=0; i<oddcount; i++)
    {
        printf("%d\n",odd[i]);// odd print hobe
    }



}
