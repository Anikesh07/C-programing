// if else loop
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the number=");
    scanf("%d",&a);
    printf("Enter the second number=");
    scanf("%d",&b);
    if(a>b)
    {
        printf("%d Number is greater",a);
    }
    else
    {
        printf("%d number is minimum",b);
    }
    return 0;
}