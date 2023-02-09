#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the number");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        printf("\n%d",i);
        i=i+1;
    }
    return 0;
}