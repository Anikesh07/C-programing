#include<stdio.h>
int main()
{
    int a,b,max;
    printf("Enter two number");
    scanf("%d%d,&a,&b");
    max=(a>b)?a:b;
    printf("\nMax number=%d",max);
    return 0;
}