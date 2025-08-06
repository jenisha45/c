#include <stdio.h>
void add(int x, int y, int a, int b);
void subtract(int x, int y, int a, int b);
void multiply(int x, int y, int a, int b);
int main(void) 
{
    int x, y, a, b;
printf("Jenisha kharbuja roll.no=14\n");
    printf("Enter 1st complex number of the form (x + iy): ");
    scanf("%d+i%d", &x, &y);

    printf("Enter 2nd complex number of the form (a + ib): ");
    scanf("%d+i%d", &a, &b);
    
    add(x, y, a, b);
    subtract(x, y, a, b);
    multiply(x, y, a, b);
    return 0;
}

void add(int x, int y, int a, int b) 
{
    printf("\nThe addition of the complex numbers is: %d + i%d", x + a, y + b);
}

void subtract(int x, int y, int a, int b) {
    printf("\nThe subtraction of the complex numbers is: %d + i%d", x - a, y - b);
}

void multiply(int x, int y, int a, int b) {
    int real = (x * a +y * b);
    int imag = (y * a + x * b);
    printf("\nThe multiplication of the complex numbers is: %d + i%d", real, imag);
}

