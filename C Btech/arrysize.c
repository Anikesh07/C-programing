#include<stdio.h>
void main()
{
    int i,n;
    printf("Enter array size");
    scanf("%d",&n);
    int x[n];
    for(i=0;i<=n;i++)
    {
        printf("enter the value=");
        scanf("%d,&x[i]");
        printf("Value=%d\n",x[i]);
    }
}