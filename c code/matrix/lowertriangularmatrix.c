#include <stdio.h>
int main() 
{ 
    int a[3][3],i,n,j;
    int temp;
printf("Jenisha kharbuja Roll.no=14\n");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
    printf("enter the elements=");
    scanf("%d",&a[i][j]);
    }
}
printf("entered elment are=\n");
for(i=0;i<3;i++)
{
    for (j=0;j<3;j++)
    {
     printf("%d\t",a[i][j]);
    
    }
}
for(j=1;j<3;j++)
   {
       for(i=0;i<j;i++)
       {
           a[i][j]=0;
       }
   }
printf("\nlower triangular matrix=\n");
   for(i=0;i<3;i++)
{
    for (j=0;j<3;j++)
    {
     printf("%d\t",a[i][j]);
    }
    printf("\n");
}
    return 0;
}