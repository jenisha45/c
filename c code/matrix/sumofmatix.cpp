#include <stdio.h>
int main() 
{ 
    int a[3][3],sum[3][3],b[3][3],i,j;
printf("Jenisha kharbuja Roll.no=14\n");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
  printf("entered the 1st matrix elment[%d][%d]:" ,i, j);
    scanf("%d",&a[i][j]);
    }
}
for(i=0;i<3;i++)
{
    for (j=0;j<3;j++)
    {
  printf("entered the 2nd matrix elment[%d][%d]:",i, j);
  scanf("%d",&b[i][j]);
    }
}
for(i=0;i<3;i++)
{
    for (j=0;j<3;j++)
    {
        sum[i][j]=a[i][j]+b[i][j];
    }
}
printf("the sum of the matrix=\n");
for(i=0;i<3;i++)
{
    for (j=0;j<3;j++)
    {
     printf("%d\t",sum[i][j]);
     }
printf("\n");
}
    return 0;

}
