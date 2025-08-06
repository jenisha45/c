#include<stdio.h>
float great(float a,float b,float c);
int main()
{
    float a,b,c,d;
    printf("Jenisha kharbuja roll.no=14\n");
    printf("enter the value of a,b and c=");
    scanf("%f%f%f",&a,&b,&c);
     d= great(a,b,c);
    printf("the greatest among %2f, %2f and %2f =%2f\n",a,b,c);
}
float great(float a,float b,float c)
{ 
if(a<b && a<c)
{
    return a;
}
else if(b<a && b<c)
{
    return b;
}
else 
{
    return c;
}
}