#include <stdio.h>
#define m 2
#define n 2

int main() {
    int A[m][n], B[m][n], SUM[m][n];
    int (*a)[n] = A;      // pointer to first matrix
    int (*b)[n] = B;      // pointer to second matrix
    int (*sum)[n] = SUM;  // pointer to result matrix
    int i, j;
    printf("Jenisha kharbuja roll.no=14\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) 
        {
    printf("Input first matrix elements of order [%d][%d]:", i, j);
            scanf("%d", (*(a + i) + j));
        }
    }

    printf("\nThe first matrix is:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", *(*(a + i) + j));
        }
        printf("\n");
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
         printf("Input second matrix elements of order [%d][%d]:", i, j);
            scanf("%d", (*(b + i) + j));
        }
    }
   printf("\nThe second matrix is:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
 
            printf("%d\t", *(*(b + i) + j));
        }
        printf("\n");
    }

    // Summing the matrices
    printf("\nThe sum of the matrices is:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            *(*(sum + i) + j) = *(*(a + i) + j) + *(*(b + i) + j);
            printf("%d\t", *(*(sum + i) + j));
        }
        printf("\n");
    }

    return 0;
}
