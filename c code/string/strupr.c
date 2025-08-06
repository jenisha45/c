#include <stdio.h>
#include <string.h>

int main()
{
    printf("Jenisha kharbuja roll.no=14\n");

    char a[50];

    printf("Enter the string: ");
    scanf(" %[^\n]", a);  // Space before %[^\n] helps ignore leftover newline

    strupr(a);  // Converts string to lowercase

    printf("String after strupr: %s\n", a);

    return 0;
}