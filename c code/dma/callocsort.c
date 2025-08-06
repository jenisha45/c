//ascending order 1 2 3
#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int *p,n,i,temp;
    printf("Jenisha kharbuja roll.no=14\n");
    printf("enter the size of the array= ");
    scanf("%d",&n);
p=(int*)calloc(n,sizeof(int));
for(i=0;i<n;i++)
{
    printf("enter the array element=");
    scanf("%d",&p[i]);
}
 printf("the data you entered=\n");
for(i=0;i<n;i++)
{
 printf("%d\t",p[i]);   
}
for(i=0;i<n-1;i++)
{
    for(int j=0;j<n-i-1;j++)
    {
        if(p[j]>p[j+1])
        {
          temp=p[j];
          p[j]=p[j+1];
          p[j+1]=temp;
        }
    }
}
printf("\nthe ascending order=");
for(i=0;i<n;i++)
printf("%d\t",p[i]);

    return 0;
}

