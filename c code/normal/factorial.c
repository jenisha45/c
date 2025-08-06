#include <stdio.h>

int main() {
    printf("Jenisha kharbuja Roll.no=14\n");
int i,a,fact=1;
printf("Enter a number=");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
    fact*=i;
}
printf("the factorial of the %d is =%d",a,fact);
    return 0;
}
