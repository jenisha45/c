#include<stdio.h>

int main()
{
    float a[100], b[100], sum, prod = 1, x;
    int i, j, n;
    
    printf("enter the size of array: ");
    scanf("%d",&n);

    printf("enter x values:\n");
    for(i=0;i<n;i++)
        scanf("%f",&a[i]);

    printf("enter y values:\n");
    for(i=0;i<n;i++)
        scanf("%f",&b[i]);

    printf("enter value of x to find y: ");
    scanf("%f",&x);

    float h = a[1] - a[0];
    float s = (x - a[0]) / h;

    sum = b[0];

    // Forward difference table
    for(i=1;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            b[j] = b[j+1] - b[j];
        }

        prod *= (s/i);
        s--;
        sum += b[0] * prod;
    }

    printf("Interpolated value=%f",sum);

    return 0;
}
