#include<stdio.h>
int fact(int k)
{
    if(k>=1)
    {
        return k*fact(k-1);
    }
    else
    {
        return 1;
    }
}
int main()
{
    int a,b;
    printf("Enter any number");
    scanf("%d",&a);
    b=fact(a);
    printf("Factoraial=%d",b);
}
