//ncpy functio used
#include<stdio.h>
#include<string.h>
int main()
{
    char a[20]=("Hello");
    char b[20]=("yhello");
    strncpy(b,a,2);
    printf("string a=%s\n",a);
    printf("string b=%S\n",b);
    return 0;
}