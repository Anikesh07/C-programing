#include<stdio.h>
int main()
{
    int n,fac=1;
    printf("Enter the number");
    scanf("%d",&n);
    while(n>1)
    {
        fac=fac*n;
        n--;
        printf("Factorial of number is %d");
    }
    return 0;

}