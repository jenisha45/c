#include <stdio.h>
struct employee
{
    int id;
    char name[80];
    long salary;
};
void emp(struct employee[],int n);
int main() 
{
    struct employee s[100];
    int n,i;
    printf("Jenisha kharbuja roll.no=14\n");
    printf("enter the number of employee you want to enter=");
    scanf("%d",&n);
printf(".................enter the data of employee.............\n");
for(i=0;i<n;i++)
{
    printf("enter the ID of employee[%d]=",i);
     scanf("%d",&s[i].id);
    printf("enter the name of employee[%d]=",i);
   scanf("%s",s[i].name);
    printf("enter the salary of employee[%d]=",i);
   scanf("%ld",&s[i].salary);
}
 emp(s,n);
}
void emp(struct employee s[],int n)
{int i;
 printf("the data you entered=\n");
for(i=0;i<n;i++)
{
 printf("ID=%d\tname=%s\tsalary=%ld\n",s[i].id,s[i].name,s[i].salary);   
}
}

