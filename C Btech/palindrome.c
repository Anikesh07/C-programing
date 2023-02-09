#include<stdio.h>
void main()
{
    int n,r,sum=0,temp;
    printf("Enter the number:");
    scanf("%d",&n);
    temp=0;
    while(n>0)
    {
        r=n%10;
        sum=(sum*10)+r;
        n=n/10;
    }
    if(temp==sum)
    {
        printf("Palindrome is found");
    }
    else
    {
        printf("No Palindrome is found");
    }
}