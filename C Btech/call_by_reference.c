//swap value with help of call by refernce
#include<stdio.h>
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    printf("First value=%d\n",*x);
    printf("Second value=%d\n",*y);
}
void main()
{
    int a,b;
    printf("Enter the first number=");
    scanf("%d",&a);
    printf("Enter the second number=");
    scanf("%d",&b);
    swap(&a,&b);
}