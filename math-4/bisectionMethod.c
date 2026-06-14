#include<stdio.h>
#include<math.h>
float f(float x)
{
    return x*x*x - x - 2; // Example function: f(x) = x^3 - x - 2
}   
int main()
{
    float a, b, m, E;
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
printf("Enter the tolerance: ");
scanf("%f", &E);
printf("Enter the maximum number of iterations: ");
scanf("%d", &maxIter);  
while(fabs(b-a) >= E && i <= maxIter)
{
    m = (a + b) / 2; // Midpoint
    if(f(a)*f(m) < 0)
        b = m; // Root is in [a, m]
    else
        a = m; // Root is in [m, b]
    i++; 
}
printf("Approximate root: %f\n", m);
return 0;
}