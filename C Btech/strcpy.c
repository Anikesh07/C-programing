#include<stdio.h>
#include<string.h>
void main()
{
    char c[20]=("Hello World!");
    char b[20];
    strcpy(b,c);
    printf("string=%sh",c);
}