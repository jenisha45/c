#include<stdio.h>
int main()
{
  float x[100],y[100],sumx=0,sumy=0,sumxy=0,sumx2=0,a,b,prod=1;
  int i,n,xx;
  
  printf("enter the size of array");
  scanf("%d",&n);
  
  printf("enter the first array element");
  for(i=0;i<n;i++)
   scanf("%f",&x[i]);
 
  printf("enter the second array element");
  for(i=0;i<n;i++)
   scanf("%f",&y[i]);

  printf("enter value of a to find y:");
  scanf("%d",&xx);
  for(i=0;i<n;i++)
    {
      sumx+=x[i];
      sumy+=y[i];
      sumxy+=x[i]*y[i];
      sumx2+=x[i]*x[i];
    }
  b=(x*sumxy-sumx*sumy)/(x*sumx2-sumx*sumx);
  a=sumy/n-b*sumx/n;
  printf("the least square line si:y=%f+%fc.\n",a,b);
  printf("the predicted value of y=%f\n",a+b*xx);
  return 0;
}  
