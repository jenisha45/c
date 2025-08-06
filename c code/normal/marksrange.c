#include <stdio.h>
int main() 
{ 
    int a[100],i,n;
    int count=0;
printf("Jenisha kharbuja Roll.no=15\n");
printf("enter the number of students you want to enter=\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    printf("enter the marks of the student=\n");
    scanf("%d",&a[i]);
    if (a[i]>=60 && a[i]<=80)
    {
   count++;
    }
}
   printf("the range of marks with 60 to 80  =%d\n",count);
    return 0;
}