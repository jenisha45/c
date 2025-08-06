// Online C compiler to run C program online
#include <stdio.h>
int con(char *);
int main() 
{char a;
    printf("Jenisha kharbuja roll.no=14\n");
    printf("enter a character= ");
    scanf("%c",&a);
    con(&a);
    printf("the correponding character =%c",a);
}
int con(char *a)
{
    if(*a>=97 &&*a<=122)
    {
        *a=*a- 32;
    }
    else if(*a>=65&*a<=90)
    {
        *a=*a + 32;
    }
}
