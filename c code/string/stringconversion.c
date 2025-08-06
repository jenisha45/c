#include <stdio.h>
int main() 
{ 
char name[30];
char name1[30];
printf("Jenisha kharbuja Roll.no=14\n");
printf("enter your name=");
scanf("%[A-Z]",name);
printf("your name is =%s",name);
scanf("%[^A-Z]",name1);
printf("\n your name is =%s",name1);
return 0;
}
