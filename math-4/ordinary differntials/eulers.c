

#include <stdio.h>
float f(float x,float y)
{
    return -x/y;
}
int main()
{
    float x0,y0,xn,m;
    int n;
    printf("Enter the approximate value of y when x:");
    scanf("%f",&xn);
    printf("Enter the intial value of y i.e y0:");
    scanf("%f",&y0);
    printf("Enter the intial value of x i.e x0:");
    scanf("%f",&x0);
    printf("Enter the number iterations: ");
    scanf("%d",&n);

    float h=(xn-x0)/n;

    while(x0<xn)
        {
            printf("y(%f)= %f\n",x0,y0);
            m=f(x0,y0);
            y0+=h*m;
            x0+=h;
        }
printf("y(%f)= %f\n",x0,y0);
        return 0;
}
