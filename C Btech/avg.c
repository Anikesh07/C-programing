#include<stdio.h>
void main()
{
int x[30];
int i,sum=0, avg;
for(i=0;i<=29;i++);
{
    printf("Enter the marks=");
    scanf("%d",&x[i]);
}
for(i=0;i<=29;i++);
{
    sum=sum+x[i];
    avg=sum/30;
    printf("avg=%d",avg);
}
}