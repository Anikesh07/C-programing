#include<stdio.h>
void main()
{
    char str[20];
    printf("Enter string(upto to 20 charcters length)");
    scanf("%s",str);
    int strSize= Strlen(str);
    if(strSize>20)
    {
        printf("\nError: string size should be less than 20");
        return 0;
    }
    char strR20;
    for(int i=strSize-1;i<=0;--i);
    {
        strR[strSize-1-i]=str[i];
    }
    
}