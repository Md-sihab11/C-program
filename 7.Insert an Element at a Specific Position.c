
/*7. Insert an Element at a Specific Position
Write a program to insert a new element into an
array at a given position.*/


#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size: ");
    scanf("%d",&size);
    int arr[size+1],i,pos,newelements;
    printf("\nInput the elements: ");
    for(i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);


    }
     for(i=0; i<size; i++)
    {
        printf("%d ",arr[i]);


    }
    printf("\nEnter the insert position you want: ");
    scanf("%d",&pos);
    if(pos<0||pos>size)
    {
        printf("Invalid input ");

    }
    else

    {

        printf("Enter new element: ");
        scanf("%d",&newelements);
        //shifting the elements
        for(i=size; i>pos; i--)
        {
            arr[i]=arr[i-1];
        }
        arr[pos]=newelements;
        size++;
        //printing the elements
        for(i=0; i<size; i++)
        {
            printf("%d ",arr[i]);
        }
        printf("\n");

    }
}
