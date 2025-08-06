#include <stdio.h>
#include<string.h>
int main() 
{ 
char name[30],a[30];
printf("Jenisha kharbuja Roll.no=14\n");
printf("enter your name=");
scanf("%s",name);
printf("orginal string=%s\n",name);
strcpy(a,name);
printf("copied string=%s",a);
return 0;
}
