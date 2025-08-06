#include<stdio.h>
int add(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
int divi(int a,int b);
int main()
{
    int a,b,sum,sub1,mul1,div1;
    printf("Jenisha kharbuja roll.no=14\n");
    printf("enter the value of a and b=");
    scanf("%d%d",&a,&b);
    sum=add(a,b);
    printf("the sum of %d and %d =%d\n",a,b,sum);
    sub1=sub(a,b);
    printf("the sub of %d and %d =%d\n",a,b,);
    mul1=mul(a,b);
    printf("the multipliaction of %d and %d =%d\n",a,b,mul1);
    div1=divi(a,b);
    printf("the division of %d and %d =%d\n",a,b,div1);
}
int add(int a,int b)
{ 
    int c=0;
    c=a+b;
    return c;
}
int sub(int a,int b)
{ 
    int c=0;
    c=a-b;
    return c;
}
int mul(int a,int b)
{ 
    int c=0;
    c=a*b;
    return c;
}
int divi(int a,int b)
{ 
    int c=0;
    c=a/b;
    return c;
}