#include<stdio.h>
int main()
{
    int a[10],i,sum;
    for(i=0;i<=10;i++)
    {
        printf("\nEnter the number");
        scanf("%d",&a[i]);
    }
    for(i=0;i<=10;i++)
    {
        sum=sum+a[i];
    }
    printf("\nSum of array number=%d,sum");
  }