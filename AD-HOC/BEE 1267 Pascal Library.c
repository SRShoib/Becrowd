#include <stdio.h>
int main(){
    int i, j, n, d, sum;

    while(1)
    {
        scanf("%d%d", &n, &d);
        if (n == 0 && d == 0)
            break;
        int x[d][n];
        for (i=0; i<d; i++)
        {
            for (j=0; j<n; j++)
            {
                scanf("%d", &x[i][j]);
            }
        }
        for (i=0; i<n; i++)
        {
            for (j=0, sum=0; j<d; j++)
            {
                sum += x[j][i];
            }
            if (sum == d)
            {
                printf("yes\n");
                break;
            }
            else
                sum = 0;
        }
        if (sum == 0)
            printf("no\n");
    }



return 0;
}
