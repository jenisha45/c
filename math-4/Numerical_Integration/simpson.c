//simpson's 1/3 
#include <stdio.h>

float f (float x)
{
    return x*x;
}
int main()
{
    float a,b,h,sum,integral;
    int n,i;
    printf("Enter the limit for function (a,b):");
    scanf("%f%f",&a,&b);
    printf("Enter the interval for function (n):");
    scanf("%d",&n);
    h=(b-a)/n;
    sum=f(a)+f(b);
    for(i=1;i<n;i++)
    {
        a+=h;
        if(i%2!=0)
        {
            sum+=4*f(a);
        }else
        {
            sum+=2*f(a);
        }
    }
    integral =(h/3)*sum;
    printf("Output:%f",integral);
    return 0;
}
