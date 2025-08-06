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
int n1;
printf("\nenter the new size of the array=");
scanf("%d",&n1);
p=(int*)realloc(p,n1*sizeof(int));
for(i=0;i<n1;i++)
{
    printf("enter the array element=");
    scanf("%d",&p[i]);
}
 printf("the data you entered=\n");
for(i=0;i<n1;i++)
{
 printf("%d\t",p[i]);   
}

free(p);
    return 0;
}

