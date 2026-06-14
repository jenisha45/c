#include<stdio.h>
#include<math.h>
float f(float x)
{
    return 2-log(x); 
}   
int main()
{
    float a, b, c, E=1e-5;
    int maxIter, i= 1;
    while(1)
    {
        printf("Enter the interval [a, b]: ");
        scanf("%f %f", &a, &b);
    if(f(a)*f(b) > 0)
        printf("Invalid interval. Please enter again.\n");
    else
        break;
}
printf("Enter the maximum number of iterations: ");
scanf("%d", &maxIter);  
do
{
   c=(a*f(b)-b*f(a))/(f(b)-f(a));
   printf("iteration %d:%f\n",i,c);
   if(f(a)*f(c)<0)
    b=c;
else
 a=c;
i++;
}while(fabs(f(c))>E&& i<=maxIter);
return 0;
}
