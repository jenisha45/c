#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double f(double x) {
    return pow(x, 3) + pow(x, 2) - 1.0;
}


double g(double x) {
    return 1.0 / sqrt(x + 1.0);
}

int main() {
    double x0, x1, E;
    int maxIter, i = 1;

    printf("Enter initial guess: ");
    scanf("%lf", &x0) ;

    printf("Enter allowed error tolerance (e.g., 0.0001): ");
    scanf("%lf", &E);

    printf("Enter maximum iterations: ");
    scanf("%d", &maxIter);

    printf("\nStep\t\tx0\t\tg(x0) [x1]\t\tAbsolute Error\n");
    printf("-----------------------------------------------------------------------\n");

    do {
        
        x1 = g(x0);
        double error = fabs(x1 - x0);

      
        printf("%d\t\t%0.6lf\t%0.6lf\t\t%0.6lf\n", i, x0, x1, error);

        if (error < tolerance) {
            printf("\nConvergence achieved! The real root is: %0.6lf\n", x1);
            return 0;
        }

        
        x0 = x1;
        step++;

    } while (step <= max_iterations);

    printf("\nThe method did not converge within %d iterations.\n", max_iterations);
    return 0;
}
