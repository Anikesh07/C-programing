 #include<stdio.h>
 void main()
 {
    int a[10],i,key,freq=0;
    for(i=0;i<10;i++)
    {
        printf("\nEnter the Number");
        scanf("%d",&a[i]);
    }
    printf("\nEnter the number likely to find frequency");
    scanf("%d",&key);
    for(i=0;i<10;i++)
    if (a[i]==key)
    freq++;
    printf("\nFrequency of %d is%d",key,freq);
 }