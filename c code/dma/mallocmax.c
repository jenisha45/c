// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int *p,n,i;
    printf("Jenisha kharbuja roll.no=14\n");
    printf("enter the size of the array= ");
    scanf("%d",&n);
p=(int*)malloc(n*sizeof(int));
for(i=0;i<n;i++)
{
    printf("enter the arrayy element=");
    scanf("%d",&p[i]);
}
 printf("the data you entered=\n");
for(i=0;i<n;i++)
{
 printf("%d\t",p[i]);   
}
    int max=p[0];
    int min=p[0];
for(i=0;i<n;i++)
{
    if(max<p[i])
    {max=p[i];}
}
for(i=0;i<n;i++)
{
if(min>p[i])
{min=p[i];}
}
printf("\nthe maximum number=%d\n",max);
printf("the minimum number=%d\n",min);
    return 0;
}

