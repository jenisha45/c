#include <stdio.h>
int sum(int a[2][2]);
int main() 
{ 
    int a[2][2],i,j,s;
printf("Jenisha kharbuja Roll.no=15\n");
for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
  printf("entered the 1st matrix elment[%d][%d]:" ,i, j);
    scanf("%d",&a[i][j]);
    }
}
s=sum(a);
 printf("the sum of the squares of the elments of the square matrix=%d\n",s);
 return 0;
}
int sum(int a[2][2])
{ int s=0,i,j; 
    for(i=0;i<2;i++)
{
    for (j=0;j<2;j++)
    {
     if(i==j)
     {
         s=s+a[i][j]*a[i][i];
     }
     }
}
return s;
}
