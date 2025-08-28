//4. Count Even and Odd Numbers
//Write a program to count the number of even and odd elements in an array.
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

            evencount++;
        }
        else
        {

            oddcount++;
        }
    }

        printf("Even numbers are=%d\n",evencount);
        printf("Odd numbers are=%d\n",oddcount);




}
