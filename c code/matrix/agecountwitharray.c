
//3) count no.of students with age 15 to 22 
#include <stdio.h>
int main() {
    int n[100],i,a,count=0;
    printf("Jenisha kharbuja Roll.no=15\n");
    printf("how many records of age do you want to entered =");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
printf("enter the number of records=\n");
scanf("%d",&n[i]);
   
    if (n[i]>=15 &&n[i]<=22)
    {
     count ++;   
    }
    }
    printf("the number of students between the age of 15 to 22= %d",count);
    return 0;
}

