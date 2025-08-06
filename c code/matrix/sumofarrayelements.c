// 2) sum of array elements
// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n[5],i,sum=0;
    printf("Jenisha kharbuja Roll.no=15\n");
    for(i=1;i<=5;i++)
    {
printf("enter the element of the array=");
scanf("%d",&n[i]);
    // }
    // for(i=1;i<=5;i++)
    // {
        // printf("%d\n",n[i]);
        sum+=n[i];
    }
    printf("the sum of the elments=%d\n",sum);
    return 0;
}
