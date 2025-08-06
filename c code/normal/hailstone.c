// 1) hailstone number 
#include<stdio.h>
int main()
{
    printf("Jenisha kharuja Roll.no=14\n");
    printf("Enter a number=\n");
    scanf("%d",&n);
    if(n<=1)
    {
    printf("entered number is invalid");
    return 0;
    }
    while(n!=1)
    {
    printf("%d",n);
    if (n%2==0)
    n=n/2;
    else 
    n=n*3+1;
    printf("\t");
    }
}
