#include<stdio.h>
int main()
{
    int num[]= {10,12,14,16,7};
    int value,pos=-1 ;
    printf("Enter the value you wanna find: ");
    scanf("%d",&value);
    for(int i=0; i<6; i++)
    {
        if(value==num[i])
        {
            pos= i+1; // Only for bracket that mistake happen
            break;
        }

    }
    if(pos==-1)
    {
        printf("value is not found");
    }
    else
    {
        printf("The number position is %d",pos);
    }
}
