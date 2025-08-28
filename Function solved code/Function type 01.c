#include<stdio.h>


int mul(int a, int b,int c)
{
    return a*b*c;
}

int main()
{
    int a,b,c;
    printf("enter three number:");
    scanf("%d%d%d",&a,&b,&c);

    printf("Multiplication value is=%d",mul(a,b,c));
    return 0;
}
