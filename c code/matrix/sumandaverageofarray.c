
#include <stdio.h>
int main() 
{ 
    int a[100],i,n;
    int sum=0;
    float avg=0;
printf("Jenisha kharbuja Roll.no=14\n");
printf("enter the number of elements you want to enter=\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    printf("enter the elemnts of array=\n");
    scanf("%d",&a[i]);
    sum +=a[i];
}
printf("the sum of the elments of the array=%d\n",sum);
avg=sum/n;
printf("the average of the elments of the array=%f\n",avg);

    return 0;
}