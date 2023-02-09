//odd of number
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the number");
    scanf("%d",a);
    b=1;
    while(b<=a)
    {
        if(b%2!==0)
        printf("Given number is even %d",b);
        b=b+1;
        break;
    }
    return 0;
}