#include <stdio.h>
int main() 
{ 
    int a[100],i,n;
    int count=0;
printf("Jenisha kharbuja Roll.no=15\n");
printf("enter the number of employees you want to enter=\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    printf("enter the salaries of the employees=\n");
    scanf("%d",&a[i]);
    if (a[i]>=10000 && a[i]<=15000)
    {
   count++;
    }
}
   printf("the range of employees with 10000 to 15000 =%d\n",count);
    return 0;
}