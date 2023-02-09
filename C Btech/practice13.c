#include<stdio.h>
int main()
{
    int i,rev=0;
    printf("Enter the number");
    scanf("%d",&i);
    while(i>0)
    {
    rev=(rev*10)+i%10;
    i=i/10;
    printf("rev number is %d",rev);
    }
    return 0;
}