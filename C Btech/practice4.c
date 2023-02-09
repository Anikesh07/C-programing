// add, sub, multiply, division, by user given value
#include<stdio.h>
int main()
{
    int a,b, add, sub, mul, div;
    printf("Enter the first number:\n");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    add=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    printf("Sum of two number is=%d\n subtraction of two number is=%d\n multiplication of two number is=%d\n division of two number=%d\n",add, sub, mul, div);
}