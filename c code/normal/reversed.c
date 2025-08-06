#include <stdio.h>

int main() {
    printf("Jenisha kharbuja Roll.no=14\n");
int a,rev=0,rem;
printf("Enter 4 digit number=");
scanf("%d",&a);
while(a!=0)
{
  rem=a%10;
  rev=rev*10+rem;
  a=a/10;
}
printf("Reversed number =%d",rev);
    return 0;
}
