#include<stdio.h>
int  mul(int a, int b,int c)
{
    printf("Multiplication value is=%d\n",a*b*c);
}
int add(int a, int b,int c)
{
    printf("Multiplication value is=%d\n",a+b+c);
}

int main()
{

    mul(10,20,30);
    mul(10,20,40);//Call this one
    add(10,2,3);

}


