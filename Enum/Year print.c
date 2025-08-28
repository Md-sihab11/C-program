#include<stdio.h>
enum year{january,feb,march,april,may,june,july,august,sep,oct,nov,dec};//starts from 0 index
int main()
{
    int i;
    for(i=january; i<dec; i++)
    {
        printf("%d ",i);//0-10 will be printed
    }
}
