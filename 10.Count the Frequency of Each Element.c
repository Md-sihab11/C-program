/*10. Count the Frequency of Each Element

Write a program to count how many times each element appears in an array.*/

#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size: ");
    scanf("%d",&size);
    int a[size],b[size],count,i,j;
    printf("\nEnter the elements: ");
    for(i=0; i<size; i++)
    {
        scanf("%d",&a[i]);
        b[i] = -1;

    }
    for(i=0; i<size; i++)
    {
        count=1;
        if(a[i]!=-1)
        {
            for(j=i+1; j<size; j++)
            {
                if(a[i]==a[j])
                {
                    count++;
                    a[j]=-1;
                }
            }
            b[i]=count;
        }
    }
    //display frequency
    for(i=0; i<size; i++)
    {
        if(b[i]!=-1)
        {
            printf("%d appears %d times\n",a[i],b[i]);
        }
    }
    return 0;
}
