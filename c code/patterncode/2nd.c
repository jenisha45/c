#include <stdio.h>

int main() {
    printf("Jenisha kharbuja Roll.no=15\n");
    int i,j;
    for(i=1;i<=5;i++)
    {
        for (j=5;j>=i;j--)
        {
            printf("*\t",j);
        }
        printf("\n");
    }
    return 0;
}
