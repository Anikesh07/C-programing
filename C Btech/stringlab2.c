//program to print concatenates
#include<stdio.h>
#include<string.h>
int main()
{
    char a[25]="Hello";
    char b[25]="World";
    strcat(a,b);
    printf("string concatenates=%s\n",a);
    printf("String Concatenates=%s\n",b);
    return 0;
}