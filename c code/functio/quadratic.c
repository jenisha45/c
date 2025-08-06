// function with argument but without return type 
#include<stdio.h>
#include<math.h>
void qudra(int a,int b, int c);
int main()
{
    int a,b,c;
    printf("Jenisha kharbuja roll.no=14\n");
    printf("enter the value of a,b and c=");
    scanf("%d%d%d",&a,&b,&c);
    qudra(a,b,c);
}
void qudra(int a,int b, int c)
{ 
int d;
d=(b*b)-(4*a*c);
if(d<0)
{
    printf("imaginary roots");
}
else if(d==0)
{
    printf("roots are equal\n");
    int p=-b/(2.0*a);
    printf("the roots are =%d\n",p);
}
else
{
   int p=(-b+sqrt(d))/(2.0*a);
    printf("real roots=%d\n",p);
    int q=(-b-sqrt(d))/(2.0*a);
    printf("imaginary roots=%d\n",q);
}
}