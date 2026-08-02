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
    double x0, x1, E,error;
    int maxIter, i = 1;

    printf("Enter initial guess: ");
    scanf("%lf", &x0) ;

    printf("Enter allowed error tolerance and maximum iterations : ");
    scanf("%lf %d", &E,&maxIter);

    do {
        
        x1 = g(x0);
         error = fabs(x1 - x0);
      printf("iteration %d:%f \n",i,x1);  
        x0 = x1;
        i++;

    } while (error>E);

    printf("\nThe method did not converge within %d iterations.\n", maxIter);
    return 0;
}
