// upper case to lower case
#include<stdio.h>
#include<string.h>
int main()
{
    char a[20]=("Hello");
    char b[25]=("yhello");
    strlwr(a);
    printf("string a=%s\n",a);
    printf("string b=%S\n",b);
    return 0;
}