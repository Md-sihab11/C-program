#include<stdio.h>
#include<string.h>

void display(int r,int c,char arr[r][c+1])
{
     printf("Enter the string: ");
    for(int i=0; i<r; i++)
    {
        scanf("%s",arr[i]);
    }
     for(int i=0; i<r; i++)
    {
        for(int j=0; arr[i][j] != '\0'; j++)
        {
            if(arr[i][j] == 'A' || arr[i][j] == 'E' || arr[i][j] == 'I' || arr[i][j] == 'O' || arr[i][j] == 'U' ||
                    arr[i][j] == 'a' || arr[i][j] == 'e' || arr[i][j] == 'i' || arr[i][j] == 'o' || arr[i][j] == 'u')

            {
                arr[i][j]='*';
            }
        }


    }
    printf("\nModified strings with :\n");
    for (int i = 0; i < r; i++)
    {
        printf("%s\n", arr[i]); // Print each row on a new line
    }
}
int main()
{
    int r,c;
    printf("Enter the r & c: ");
    scanf("%d %d",&r,&c);
    char arr[r][c+1];



   display(r,c,arr);

}
