#include<stdio.h>

void arr()
{
    int size;
    scanf("%d",&size);
    int arr[size];
    for(i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for(i=0, i<size; i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
        printf("%d",max);
    }
}
int main()
{
    arr();
}