#include<stdio.h>
int mul(int a, int b,int c)
{
    printf("Multiplication value is=%d",a*b*c);
}

int main()
{
    int a,b,c;
    printf("enter three number:");
    scanf("%d%d%d",&a,&b,&c);
    mul(a,b,c);//Call this one


}
