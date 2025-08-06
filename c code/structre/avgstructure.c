#include <stdio.h>
struct employee
{
    char name[80];
    char address[100];
    int age;
    long salary;
};
int main() 
{int sum
    struct employee s[100];
    int n,i;
    printf("Jenisha kharbuja roll.no=14\n");
    printf("enter the number of employee you want to enter=");
    scanf("%d",&n);
printf(".................enter the data of employee.............\n");
for(i=0;i<n;i++)
{
    printf("enter the name of employee[%d]=",i);
   scanf("%s",s[i].name);
    printf("enter the address of employee[%d]=",i);
   scanf("%s",s[i].address);
       printf("enter the age of employee[%d]=",i);
     scanf("%d",&s[i].age);
    printf("enter the salary of employee[%d]=",i);
   scanf("%ld",&s[i].salary);
}
 printf("the data you entered=\n");
for(i=0;i<n;i++)
{
    
 printf("ID=%d\tname=%s\tsalary=%ld\n",s[i].id,s[i].name,s[i].salary);   
}
}

