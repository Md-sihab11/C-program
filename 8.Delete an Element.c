//8. Delete an Element
//Write a program to delete an element from an array at a given index.
#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    int a[size],i;
    printf("\nEnter elements im array:\n");
    for(i=0; i<size; i++)
    {
        scanf("%d",&a[i]);
    }
    int pos;
    printf("\nWhich poition you want to delete?\n ");
    printf("\nWrite here: ");
    scanf("%d",&pos);
    if (pos<=0||pos>size)
    {
        printf("Invalid input");

    }
    else{


        for(i=pos-1; i<size-1; i++)
        {
            a[i]=a[i+1];
        }
        size--;
        for(i=0;i<size; i++){
             printf("%d\t",a[i]);
        }

    }
    return 0;

}
