#include<stdio.h>
int main()
{
  float a[100],b[100],sum=b[0],prod,x;
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

  for(i=0;i<n;i++)
    {
      prod=1;
      for(j=0;j<n;j++)
        {
          if(i!=j)
            prod*=(x-a[j])/(a[i]-a[j]);
        }
      sum+=b[i]*prod;
    }
  printf("Interpolated value=%f",sum);
  return 0;
}  
