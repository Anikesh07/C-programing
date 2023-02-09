//case compare 
#include<stdio.h>
#include<string.h>
int main()
{
    char a[25]="hello";
    char b[25]="HELLO";
    if(strcasecmp(a,b)==0)
    {
        printf("Same");
    } 
    else
    {
        printf("Not same");
    }
    return 0;
}