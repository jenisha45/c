
#include <stdio.h>
int main() 
{ 
    int a[100],i,n;
printf("Jenisha kharbuja Roll.no=15\n");
printf("enter the number of elements you want to enter=\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    printf("enter the elemnts of array=\n");
    scanf("%d",&a[i]);
}
int max=a[0];
for(i=0;i<n;i++)
{
    if (max<a[i])
    max=a[i];
}
   printf("the largest number of the array=%d\n",max);
    return 0;
}