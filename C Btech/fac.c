#include<stdio.h>
int main()
{
    int n,fac=1;
    printf("\nEnter the number");
    scanf("%d",&n);
    for(;n>0;n--)
    {
        fac=fac*n;
    }
    printf("\nFactorial=%d",fac);
    return 0;
}