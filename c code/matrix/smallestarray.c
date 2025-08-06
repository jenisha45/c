// smallest among n numbers 
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
int min=a[0];
for(i=0;i<n;i++)
{
    if (min>a[i])
    min=a[i];
}
   printf("the smallest number of the array=%d\n",min);
    return 0;
}