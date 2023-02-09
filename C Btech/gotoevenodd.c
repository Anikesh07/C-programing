#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number");
    scanf("%d",&a);
    if(a%2==0)
    goto even;
    else
    goto odd;
    even:
    printf("\nNumber is even");
    return 0;
    odd:
    printf("\nNumber is odd");
    return 0;
} 