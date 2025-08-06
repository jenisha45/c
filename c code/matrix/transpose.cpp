#include <stdio.h>
int main() 
{ 
    int a[3][3],tran[3][3],i,j;
    int temp;
printf("Jenisha kharbuja Roll.no=14\n");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
  printf("entered the 1st matrix elment[%d][%d]:" ,i, j);
    scanf("%d",&a[i][j]);
    }
}
 printf("the matrix to be transposed=\n");
for(i=0;i<3;i++)
{
    for (j=0;j<3;j++)
    {
      printf("%d\t",a[i][j]);
    }
    printf("\n");
}
for(i=0;i<3;i++)
{
    for (j=0;j<3;j++)
    {
     tran[j][i]=a[i][j];
     }
}
 printf("the transposed matrix=\n");
for(i=0;i<3;i++)
{
    for (j=0;j<3;j++)
    {
     printf("%d\t",tran[i][j]);
     }
printf("\n");
}
    return 0;

}
