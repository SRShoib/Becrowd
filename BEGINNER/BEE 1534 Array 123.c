#include <stdio.h>
int main(){
    int i, j, n;

    while(scanf("%d", &n) != EOF)
    {
        int arr[n][n];
        for (i=0; i<n; i++)
        {
            for (j=0; j<n; j++)
            {
                if ((i + j) == (n-1))
                    arr[i][j] = 2;
                else if (i == j)
                    arr[i][j] = 1;
                else
                    arr[i][j] = 3;
            }
        }
        for (i=0; i<n; i++)
        {
            for (j=0; j<n; j++)
            {
                printf("%d", arr[i][j]);
            }
            printf("\n");
        }
    }


return 0;
}
