//palindrome.c
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the value of n");
    scanf("%d",&n);
    i=1;
    while(i<=10)
    {
        if (i%2==0)
        printf("\nEven number");
        i=i+1;
    }
    return 0;
}