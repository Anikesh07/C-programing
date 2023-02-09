#include<stdio.h>
void main()
{
    int i,j,m,n;
    printf("Enterrows value");
    scanf("%d",&m);
    printf("Enter Colo Value");
    scanf("%d",&n);
    int x[m][n];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",x[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d\t",x[j][i]);
        }
        printf("\n");
    }
}