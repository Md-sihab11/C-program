#include<stdio.h>
#include<string.h>
int main()
{
    int len1,len2;
    char a[30]="hello";
    char b[]="world";
    len1=strlen(a);
    len2=strlen(b);


    strcat(a,b);

    //printf("%s\n",a);
    puts(a);

    for(int i=0; i<=len2; i++)
    {
        a[len1+i]=b[i];
    }
    printf("%s\n",a);


}
