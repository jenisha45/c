#include <stdio.h>
#include <string.h>
struct Employee {
    int id;
    char name[50];
    char address[100];
};
int main()
{
    struct Employee e[25];
    struct Employee *p = e;
    int i, j,n;
    printf("Jenisha kharbuja roll.no=14\n");
    printf("enter the number of data you want to enter=");
    scanf("%d",&n);
    // Input data
    for (i = 0; i < n; i++) {
        printf("Enter ID, Name, and Address for employee %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &(p + i)->id);

        printf("Name: ");
        scanf(" %[^\n]", (p + i)->name);  // accepts spaces

        printf("Address: ");
        scanf(" %[^\n]", (p + i)->address);  // accepts spaces
    }

    // Sort using pointer and no function
    for (i = 0; i < n-1; i++) {
        for (j = i + 1; j < n; j++) {
            if ((p + i)->id > (p + j)->id) {
                // Swap directly
                struct Employee temp = *(p + i);
                *(p+ i) = *(p + j);
                *(p + j) = temp;
            }
        }
    }

    // Print sorted data
    printf("\nSorted Employee List (by ID):\n");
    for (i = 0; i < n; i++) {
        printf("ID: %d, Name: %s, Address: %s\n",
               (p + i)->id, (p + i)->name, (p + i)->address);
    }

    return 0;
}
