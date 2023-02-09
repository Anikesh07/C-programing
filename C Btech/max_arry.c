#include<stdio.h>
void main()
{
    int a[10],i,max;
    for(i=0;i<10;i++)
    {
    printf("\nEnter the number ");
    scanf("%d"),&a[i];
    }
    max=a[0];
    for(i=0;i<10;i++)
    if(a[i]>max)
    max=a[i];
    printf("\nMax number is%d",max);
}