// ADMD of two number
#include<stdio.h>
void main()
{
    int a,b,sum,sub,mul,div;
    printf("enter the value a ");
    scanf("%d",&a);
    printf("Enter the value of b");
    scanf("%d",&b);
    sum=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    printf("\n%d\n%d\n%d\n%d",sum,sub,mul,div);
}