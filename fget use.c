#include<stdio.h>
#include<string.h>
int main(){
char str[10];
gets(str);  // Reads input into str
printf("You entered: %s\n", str);
}
