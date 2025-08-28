#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size: ");
    scanf("%d",&size);
    int arr[size];
    printf("\nInput the elements: ");
    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }

    int key,freq=0;

    printf("Enter the num for checking freqency: ");
    scanf("%d",&key);

    for(int i=0; i<size; i++)
    {
        if(arr[i]==key)
            freq++;


    }

    printf("%d freeq is %d times",key,freq);

}
