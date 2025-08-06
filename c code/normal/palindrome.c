#include <stdio.h>

int main() {
    printf("Jenisha kharbuja Roll.no=14\n");
int a,b,temp,sum=0;
printf("Enter a number to be checked =");
scanf("%d",&a);
temp=a;
while(a!=0)
{
    b=a%10;
    sum=sum*10+b;
    a/=10;
}
if(temp==sum)
{
printf("the given number is palindrome");
}
else
printf("the given number is not palindrome",a);
    return 0;
}
