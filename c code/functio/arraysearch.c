#include <stdio.h>
int find(int a[], int n, int t) 
{
    for (int i = 0; i < n; i++) 
    {
        if (a[i] == t) {
            return i;  // Return index if element is found
        }
    }
    return -1;  // Return -1 if element is not found
}
int main() {
    int a[100],n,t,b;
    printf("Jenisha kharbuja roll.no=14\n");
    printf("enter the size of the array=");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("enter the array element a[%d]=",i);
        scanf("%d",&a[i]);
    }
    // int n = sizeof(a) / sizeof(a[0]);  // Calculate number of elements in array
    printf("enter the element you want to search=");
    scanf("%d",&t);

    int index = find(a, n, t);

    if (index != -1) {
        printf("Element %d found at index %d.\n", t, index);
    } else {
        printf("Element %d not found in the array.\n", t);
    }

    return 0;
}
