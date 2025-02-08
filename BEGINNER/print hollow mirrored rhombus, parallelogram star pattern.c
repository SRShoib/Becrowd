/*#include <stdio.h>
int main(){
    int i, j, n;
    printf("Enter number of rows or column: ");
    scanf("%d", &n);

    for (i=1; i<=n; i++)
    {
        for (j=1; j<=i - 1; j++)
        {
            printf(" ");
        }
        for (j=1; j<=n; j++)
        {
            if (i == 1 || i == n || j == 1 || j == n)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

return 0;
}*/

#include <stdio.h>
int main(){
    int i, j, rows, column;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of column: ");
    scanf("%d", &column);

    for (i=1; i<=rows; i++)
    {
        for (j=1; j<=i-1; j++)
        {
            printf(" ");
        }
        for (j=1; j<=column; j++)
        {
            if (i == 1 || i == rows || j == 1 || j == column)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

return 0;
}
