#include <stdio.h>
#include <string.h>
int main()
{
    printf("Jenisha kharbja Roll.no=14");
    char s1[50][20],temp[20];
    int i,j,n;
    printf("Enter the number of students you want to enter:");
    scanf("%s",n);
    printf("Enter the name of students :");
    for(i=0;i<n;i++)
    {
        printf("student %d=",i);
         scanf("%s",n);
    }
        for(i=0;i<n;i++)
    {
        for(j=0;j<n;i++)
        {
            if(strcmp(s1[j],s1[j+1]>0))
            {
               strcpy(temp,s1[j]);
               strcpy(s1[j],s1[j+1]);
               strcpy(s1[j+1],temp);
            }
        }
    }
    printf("sorted list \n");
   for(i=0;i<n;i++)
    printf("%s\n",s1[i]);
    return 0;
}
//another opotion  
#include <stdio.h>
#include <string.h>

int main()
{
    printf("jenisha kharbuja roll.no=14\n");

    char a[50];
    char b[50];

    printf("Enter the first string: ");
    scanf("%[^\n]", a);
    getchar(); // consume leftover newline

    printf("Enter the second string: ");
    scanf("%[^\n]", b);

    if (strcmp(a, b) == 0)
    {
        printf("Both strings are equal.\n");
    }
    else
    {
        printf("Strings are not equal.\n");
    }

    return 0;
}
