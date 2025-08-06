//recursion function
#include <stdio.h>
long fact(int a);
int main()
{
    int a;
    printf("Jenisha kharbuja roll.no=14\n");
    printf("enter a number=");
    scanf("%d",&a);
    long c=fact( a);
    printf("the factorial=%ld",c);
}
long fact(int a)
{
    if (a==0)
    {
        return 1;
    }
    else 
    return (a*fact(a - 1));
}