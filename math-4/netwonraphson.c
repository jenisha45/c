#include <stdio.h>
#include <math.h>

float f(float x)
{
    return x*x*x - 30;
}

float df(float x)
{
    return 3*x*x;
}

int main()
{
    float x0, x1, err, E = 1e-5;
    int maxIter, i = 1;

    printf("Enter initial guess and maximum iterations: ");
    scanf("%f %d", &x0, &maxIter);

    do
    {
        if (df(x0) == 0)
        {
            printf("Derivative is zero. Method fails.\n");
            return 0;
        }

        x1 = x0 - f(x0)/df(x0);

        err = fabs((x1 - x0)/x1);

        printf("Iteration %d : x = %.6f   Error = %.6f\n", i, x1, err);

        x0 = x1;
        i++;

    } while (err > E && i <= maxIter);

    printf("\nApproximate root = %.6f\n", x1);

    return 0;
}
