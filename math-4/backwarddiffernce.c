#include<stdio.h>

int main()
{
    float a[100], b[100], sum, prod = 1, x;
    int i, j, n;

    printf("enter the size of array: ");
    scanf("%d",&n);

    printf("enter the first array element: ");
    for(i=0;i<n;i++)
        scanf("%f",&a[i]);

    printf("enter the second array element: ");
    for(i=0;i<n;i++)
        scanf("%f",&b[i]);

    printf("enter value of a to find y: ");
    scanf("%f",&x);

    sum = b[n-1];

    float h = a[1] - a[0];
    float s = (x - a[n-1]) / h;

    for(i=1;i<n;i++)
    {
        for(j=n-1;j>=i;j--)
        {
            b[j] = b[j] - b[j-1];
        }

        prod *= (s+i-1)/i;
        sum += b[n-1] * prod;
    }

    printf("Interpolated value = %f",sum);

    return 0;
}
