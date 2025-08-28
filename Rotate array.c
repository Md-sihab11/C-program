
/*Rotate Array Elements to the Right
Write a program to rotate the elements of a circular array to the right by k positions.
After rotating, the last k elements should move to the beginning of the array.
    Sample:
    Input: [1, 2, 3, 4, 5], Rotate by 1 position.
    Output: [5, 1, 2, 3, 4]*/

    #include<Stdio.h>
    int main()
    {
        int arr[5]={1, 2, 3, 4, 5},i;

        int p;
        printf("Enter the position you wanna move : ");
        scanf("%d",&p);

        for(int k=1; k<=p; k++)
        {
        int temp=arr[5-1];
        for(i=5-1;i>=0;i--)
        {
           arr[i+1]=arr[i];
        }
        arr[0]=temp;
        }


// Print the updated array
    for (i = 0; i <5; i++)
        {
        printf("%d ", arr[i]);
        }
    printf("\n");
    }

