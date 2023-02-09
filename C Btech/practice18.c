#include<stdio.h>
int main()
{
    int i=1,j;
    while(i<=5)
    {
        printf("\n");
        while(j<=i)
        {
            printf("*");
            j++;
        }
        i++;
    }
    return 0;
}