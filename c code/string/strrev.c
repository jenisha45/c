#include <stdio.h>
int main()
{
    printf("Jenisha kharbja Roll.no=14");
    char s1[20];
    printf("Enter a string:");
    scanf("%s",s1);
    strrev(s1);
    printf("String after reversal:%s",s1);
    return 0;
}