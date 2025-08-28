#include<stdio.h>
float sum();

float sum()
{
    float a,b,sum=0;
    printf("Enter two numbers: ");
    scanf("%f%f",&a,&b);
    sum=a+b;
    printf("Sum=%f\n",sum);
}

void main()
{
    sum();
    printf("Shakib\n");
    sum();
    printf("Mazumder\n");

}

