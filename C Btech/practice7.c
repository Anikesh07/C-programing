//max between three number
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the number");
    scanf("%d%d%d",&a,&b,&c);
    if(a<b&&a<c)
    {
        printf("Maximum number is %d",a);
    }
    else if(a>b&&b>c)
    {
        printf("Maximum number is %d",b);
    }
    else
    {
        printf("MAximum number is %d",c);
    }
    return 0;
}