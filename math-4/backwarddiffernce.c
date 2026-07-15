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
float h=a[1]-a[0];
  float s=(x-a[0])/h;
  for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
        {
        b[j]=b[j+1]-b[j];
        }
      prod*=s/i;
      s++;
      sum+=b[n-1-i]*prod;
    }
  printf("b(%d)=%f",x,sum);
  return 0;
}  
