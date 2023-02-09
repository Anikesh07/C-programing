#include<stdio.h>
int main()
{
    int x,y,z,c;
    printf("Enter the max number");
    scanf("%d",&x);
    x=0;
    y=1;
    z=0;
    while(x!=0)
    {
        printf("%d",z);
        x=y;
        y=z;
        z=x+y;
    }
    return 0;
}