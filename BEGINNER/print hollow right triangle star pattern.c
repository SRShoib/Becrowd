#include <stdio.h>
int main(){
    int i, j, n;
    printf("Enter number of rows or column: ");
    scanf("%d", &n);

    for (i=1; i<=n; i++)
    {
        for (j=1; j<=i; j++)
        {
            if (i == n || j == 1 || j == i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

return 0;
}
