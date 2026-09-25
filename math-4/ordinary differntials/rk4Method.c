

#include <stdio.h>
float f(float x,float y)
{
    return x*x+y*y;
}
int main()
{
    float x0,y0,xn,m1,m2,m3,m4;
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
            		m1 = f(x0, y0);
		m2 = f(x0 + h/2, y0 + h/2 * m1);
		m3 = f(x0 + h/2, y0 + h/2 * m2);
		m4 = f(x0 + h, y0 + h * m3);
		y0 += h/6 * (m1 + 2*m2 + 2*m3 + m4 );
		x0 += h;
        }
printf("y(%f)= %f\n",x0,y0);
        return 0;
}
