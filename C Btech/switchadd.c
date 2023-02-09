#include<stdio.h>
int main()
{
   char a,b,ch;
    printf("\nEnter Two number");
    scanf("%d%d",&a,&b);
    printf("\n1=ADD\n2=SUB\n3=MUTLIPLY\n4=DIVIDE");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        printf("\nAdditon=%d",a+b);
        break;
        case 2:

        
        printf("\nSubctract=%d",a-b);
        break;
        case 3:
        printf("\nMultiply=%d",a*b);
        break;
        case 4:
        printf("\nDivide=%d",a/b);
        break;
        default:
        printf("\nWrong choice");
        break;
    }
    return 0;
}