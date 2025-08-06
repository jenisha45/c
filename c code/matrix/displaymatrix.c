#include <stdio.h>
int main() 
{ 
    int a[2][2],i,n,j;
    int temp;
printf("Jenisha kharbuja Roll.no=14\n");
for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
    printf("enter the elements=");
    scanf("%d",&a[i][j]);
    }
}
printf("entered elment are=\n");
for(i=0;i<2;i++)
{
    for (j=0;j<2;j++)
    {
     printf("a[%d][%d]=%d\t",i,j,a[i][j]);
    }
}
    return 0;
}