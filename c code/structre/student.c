#include <stdio.h>
struct student
{
char name[90];
int roll;
float percentage;
};
int main() 
{
    struct student s[100];
    int n,i;
    printf("Jenisha kharbuja roll.no=14\n");
    printf("enter the number of student you want to enter=");
    scanf("%d",&n);
printf(".................enter the data of student.............\n");
for(i=0;i<n;i++)
{
    printf("enter the name of student[%d]=",i);
     scanf("%s",&s[i].name);
    printf("enter the roll_no of student[%d]=",i);
   scanf("%d",&s[i].roll);
    printf("enter the percentage of student[%d]=",i);
   scanf("%f",&s[i].percentage);
}
 printf("the data you entered=\n");
for(i=0;i<n;i++)
{
    if(s[i].percentage>=80)
 printf("name=%s\troll_no=%.2d\tpercentage=%f\n",s[i].name,s[i].roll,s[i].percentage);   
}
}

