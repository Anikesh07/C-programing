#include<stdio.h>
void main()
{
    int a[10],i,flag=0,pos,key;
    for(i=0;i<10;i++)
    {
        printf("\nEnter the Number");
        scanf("%d",&a[i]);
    }
    {
        printf("\nEnter the number to search");
        scanf("%d",&key);
        for(i=0;i<10;i++)
        {
            if(a[i]==key)
            {
                pos=i+1;
                flag=1;
                break;
            }
        }
        if (flag==1)
        printf("\nNumber is found at %dpostioin",pos);
        else
        printf("\nNumber is not found.");
    }

}