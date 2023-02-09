#include<stdio.h>
int main()
{
    int a,b,c;
    printf("\nEnter the number");
    scanf("%d%d%d",&a,c&b,&c);
    if (a>b && b>c)
    printf("\nMax No=%d;a");
    else if (b>a && b>c)
    printf("\nMax No=%d;b");
    else
    printf("\nMax No=%d",c);
    return 0;
}