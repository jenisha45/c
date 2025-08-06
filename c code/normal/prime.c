#include <stdio.h>

int main() {
    printf("Jenisha kharbuja Roll.no=14\n");
int a,i;
printf("Enter 4 digit number=");
scanf("%d",&a);
if(a<0)
{
printf("entered number is invalid");
}
for(i=2;i<=a;i++)
{
    if(a%i==0)
    {
        printf("the given number %d is composite",a);
         return 0;
    }
}
printf("the given number %d is prime",a);
    return 0;
}
