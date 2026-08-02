#include<stdio.h>
#include<math.h>
float f(float x)
{
    return (x*x*x-4); 
}   
int main()
{
    float a, b, c, E;
    int n, count= 1;
        printf("Enter the interval [a, b]: ");
        scanf("%f %f", &a, &b);
printf("Enter the tolerable error and maximum number of iterations: ");
scanf("%f%d", &E,&n);  
do
{
  if(f(a)==f(b))
    printf("Solution can not be found as the values of a and b are same");
  
   c=(a*f(b)-b*f(a))/(f(b)-f(a));
  a=b;
  b=c;
   printf("iteration %d:%f\n",count,c);

count++;
}while(fabs(f(c))>E&& count<=n);
  printf("\n The required solution is %f\n",c);
return 0;
}
