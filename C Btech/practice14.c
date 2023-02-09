#include<stdio.h>
int main()
{
    int i,x,sum=0;
    printf("Enter the number");
    scanf("%d",&i);
    x=i;
    while(i!=0)
    {
        sum=sum+(i%10)*(i%10)*(1%10);
        i=i/10;
    }
    if(sum==x);
    printf("Armstrong number")
    else
    printf("Not armstrong");
}