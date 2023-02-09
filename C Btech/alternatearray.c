#include<stdio.h>
int main()
{
    int a[10],i;
    for(i=0;i<10;i++)
    {
        printf("\nEnter the number");
        scanf("%d",&a[i]);
    }
    for(i=0;i=10;i=i+2)
    {
    printf("\n%d",a[i]);
    }
    return 0;
}