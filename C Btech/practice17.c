//to print table of the nmber
#include<stdio.h>
int main()
{
    int i,n=1;
    printf("enter the number");
    scanf("%d",&i);
    while(i<=10)
    {
        printf("\n%d",n*i);
        i=i+1;
    }
    return 0;
}