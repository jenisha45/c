#include <stdio.h>
int main() 
{ 
    int a[100],i,n,j;
    int temp;
printf("Jenisha kharbuja Roll.no=15\n");
printf("enter the number of elements you want to enter=\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    printf("enter the elements=\n");
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    for (j=i+1;j<n;j++)
    {
     if (a[i]<a[j])
    {
   temp=a[i];
   a[i]=a[j];
   a[j]=temp;
    } 
    }
}
   printf("numbers in descending\n");
   for(i=0;i<n;i++)
   printf("%d\t",a[i]);
    return 0;
}