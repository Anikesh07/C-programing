//code to count the number of word with the help of string//
#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int i,word=1;
    printf("\nEnter the number:");
    gets(a);
    i=0;
    while(a[i]!='\0')
    {
        if(a[i]==' ')
        word++;
        i++;   
    }
    printf("\nNumber of word=%d",word);
    return 0;
}