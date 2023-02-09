#include<stdio.h>
int main()
{
    int a[3][3],i,j;
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    {
        printf("\nEnter the number to enter the 2d array");
        scanf("%d",&a[i][j]);
    }
    printf("\nEnter the number for 2d array ");
    for(i=0;i<3;i++)
    {
        printf("|n2D ellemants of array are:");
        for(j=0;j<3;j++)
        printf("%d\t",a[i][j]);
    }
return 0;
}