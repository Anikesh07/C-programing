//call by value
#include<stdio.h>
void mul(int a)
{
    int s;
    s=a*10;
    printf("no.is %d",s);
}
void main()
{
    int a;
    printf("enter the number");
    scanf("%d",&a);
    mul(a);
}