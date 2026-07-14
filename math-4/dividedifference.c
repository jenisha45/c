#include<stdio.h>
int main()
{
  float a[100],b[100],sum=b[0],prod=1,x;
  int i,j,n;
  
  printf("enter the size of array");
  scanf("%d",&n);
  
  printf("enter the first array element");
  for(i=0;i<n;i++)
   scanf("%d",&a[i]);
 
  printf("enter the second array element");
  for(i=0;i<n;i++)
   scanf("%d",&b[i]);

  printf("enter value of a to find y:");
  scanf("%d",&x);

  for(i=1;i<n;i++)
    {
      for(j=0;j<n-1;j++)
        {
          b[j]=(b[j+1]-b[j])/(a[j+1]-a[j]);
        }
      prod*=(x-a[i-1]);
      sum+=b[0]*prod;
    }
  printf("answer=%d",sum);
  return 0;
}
