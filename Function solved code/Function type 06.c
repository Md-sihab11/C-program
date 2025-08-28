#include<stdio.h>

void power(double base, double exp)
{
    double result=1,i;
    for(i=1; i<=exp; i++)
    {
        result=result*base;

    }
    printf("%lf\n",result);
}

int main()
{
    double base, exp;
    printf("ENter base & exp: ");
    scanf("%lf%lf",&base,&exp);
    power(base,exp);

}

