#include<stdio.h>
int main()
{
    int sum=0,avg,size;
    printf("Enter the size: ");
    scanf("%d",&size);
    int arr[size],i;
    printf("\nEnter array elements: \n");
    for(i=0; i<size; i++)
    {
        printf("array [%d] index= ",i);
        scanf("%d",&arr[i]);
    }
    printf("\nSum and avg of the array elements: \n");
    for(i=0; i<size; i++)
    {
       sum=sum+arr[i];
       avg=sum/size;

    }
    printf("Sum=%d\n",sum);
    printf("Avg=%d\n",avg);




}
