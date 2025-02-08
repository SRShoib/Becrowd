#include <stdio.h>
int main(){
    int n, m, i, j, p = 0;

    scanf("%d%d", &n, &m);
    int t[n][m];

    for (i=0; i<n; i++)
    {
        for (j=0; j<m; j++)
        {
                scanf("%d", &t[i][j]);
        }
    }
    for (i=0; i<n; i++)
    {
        for (j=0; j<m; j++)
        {
              if (i>0 && i < (n-1) && j > 0 && j < (m-1))
            {
                if (t[i][j]==42&&t[i-1][j-1]==7&&t[i-1][j]==7&&t[i-1][j+1]==7&&t[i][j-1]==7&&t[i][j+1]==7
                    &&t[i+1][j-1]==7&&t[i+1][j]==7&&t[i+1][j+1]==7)
                    {
                        printf("%d %d\n", (i+1), (j+1));
                        p = 1;
                        break;
                    }

            }

        }
    }
    if (p == 0)
        printf("0 0\n");

return 0;
}
