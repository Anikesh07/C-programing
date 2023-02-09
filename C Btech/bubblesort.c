#include<stdio.h>
void main()
{
    int n,i,j,c;
    printf("Enterarray size=");
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(j=0;j<n;j++)
    {
        for(i=0;i<n;i++)
        {
            if(x[i]<x[i+1])
            {
                c=x[i];
                x[i]=x[i+1];
                x[i+1]=c;
            }
        }
    }
    printf("Soretd array=");
    for(i=0;i<n;i++)
    {
        printf("%d\n",x[i]);
    }

}