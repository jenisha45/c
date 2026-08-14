//simpson's 3/8
#include<math.h>
#include <stdio.h>

float f (float x)
{
    return log(x);
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
        if(i%3==0)
        {
            sum+=2*f(a);
        }else
        {
            sum+=3*f(a);
        }
    }
    integral =3*(h/8)*sum;
    printf("Output:%f",integral);
    return 0;
}
