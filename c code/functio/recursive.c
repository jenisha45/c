//recursive function
#include <stdio.h>
long power(int b,int n);
int main()
{
    int b,n;
    printf("Jenisha kharbuja roll.no=14\n");
    printf("enter the base number i.e b=");
    scanf("%d",&b);
    printf("enter the power number i.e n=");
    scanf("%d",&n);
    long c=power( b, n);
    printf("the power=%ld",c);
}
long power(int b,int n)
{
    if (n==0)
    {
        return 1;
    }
    else if (n==1)
    {
        return (b*1);
    }
    else 
    return b*power(b,n - 1);
}