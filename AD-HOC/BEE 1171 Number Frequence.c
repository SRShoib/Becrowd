#include <stdio.h>
#define MAX_SIZE 1000
int main(){
    int i, j, n, x[MAX_SIZE];
    scanf("%d", &n);

    for (i=0; i<n; i++)
    {
        scanf("%d", &x[i]);
    }
    for (i=0; i<n;i++)
    {
        for (j=i+1; j<n; j++)
        {
            if (x[i] > x[j])
            {
                x[i] = x[i] + x[j];
                x[j] = x[i] - x[j];
                x[i] = x[i] - x[j];
            }
        }

    }
    for (i=0; i<n; i++)
    {
        if (x[i] == x [i-1] && i > 0)
            continue;
        else
        {   int p = 0;
            for (j=i; j<n; j++)
            {
                if (x[i] == x[j])
                    p++;
            }
            printf("%d aparece %d vez(es)\n", x[i], p);
        }
    }


return 0;
}
