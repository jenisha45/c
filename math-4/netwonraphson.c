#include<stdio.h>
#include<math.h>
float f(float x)
{
    return pow(x,3) -30 ; // Example function: f(x) = x^3 - 30
}   
float dt(float x)
{
    return 3*pow(x,2); // Example function: f(x) = 3x^2
}   
int main()
{
    float x0=5, x1, err, E=1e-20;
    int maxIter=20, i= 1;
    do
    {
     x1=x0-f(x0)/df(x0);
      printf("Iteration %d x_%d=%f\n",i,i,x1);
      err=(x1-x0)/x1;
      printf("Error:%f\n",err);
      x0=x1;
      i++;
}while(fabs(err)>E && i<maxIter);

printf("The approximate required root:%f ",x1);
 
return 0;
}
