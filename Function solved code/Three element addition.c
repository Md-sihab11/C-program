
#include<stdio.h>
int sum (int a, int b,int c)
{
    return a+b+c;
}

int main()
{
    int a,b,c;
    printf("enter three number:");
    scanf("%d%d%d",&a,&b,&c);
    int add=sum(a,b,c);
    printf("Sum=%d",add);

}
