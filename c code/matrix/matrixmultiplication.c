#include <stdio.h>
int main() 
{ 
    int a[10][10],b[10][10],s[10][10];
    int r1,c1,r2,c2,i,j,k;
printf("Jenisha kharbuja Roll.no=14\n");
printf("enter the row and column of 1st matrix= ");
scanf("%d%d",&r1,&c1);
printf("enter the row and column of 2nd matrix= ");
scanf("%d%d",&r2,&c2);
if(c1!=r2)
{
    printf("the multiplication is not possible");
    return 0;
}
else
{
for(i=0;i<r1;i++)
{
    for(j=0;j<c1;j++)
    {
  printf("enter the 1st matrix element[%d][%d]:" ,i, j);
    scanf("%d",&a[i][j]);
    }
}
for(i=0;i<r2;i++)
{
    for (j=0;j<c2;j++)
    {
  printf("enter the 2nd matrix element[%d][%d]:",i, j);
  scanf("%d",&b[i][j]);
    }
}
}
for(i=0;i<r1;i++)
{
    for (j=0;j<c2;j++)
    {
       s[i][j]=0;
       for(k=0;k<c1;k++)
       {
           s[i][j]+=a[i][k]*b[k][j];
       }
    }
}
printf("the matrix multiplication =\n");
for(i=0;i<r1;i++)
{
    for (j=0;j<c2;j++)
    {
        printf("%d\t",s[i][j]);
    }
    printf("\n");
}
    return 0;
}
