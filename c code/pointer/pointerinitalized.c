#include <stdio.h>

int main() {
int a,*p;
p=&a;
printf("Jenisha kharbuja roll.no=14\n");
printf("enter value of a =");
scanf("%d",&a);
printf("a value=%d\n",*p);
printf("address of a =%d\n",&a);
printf("a value=%d\n",a);
printf("address of a=%d\n",&(*p));
printf("address of p=%d\n",&p);
printf("value of p=%d\n",*(&p));
    return 0;
}
