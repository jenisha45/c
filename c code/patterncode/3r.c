#include <stdio.h>

int main() {
    printf("Jenisha kharbuja Roll.no=15\n");
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(k=1;k<=5-i;k++)
        {
            printf("\t");
        }
        for (j=1;j<=i;j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
    return 0;
}
