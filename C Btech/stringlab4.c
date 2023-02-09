//to print lenght of string
#include<stdio.h>
#include<string.h>
int main()
{
    char a[25]="Hello";
    char b[25]="World";
    if(strcmp(a,b)==0)
    {
        printf("String are same");
    }
    else
    {
        printf("String are not same");
    }
    return 0;
}