#include <stdio.h>
int main(){
    int i, j, n, q = 0, p = 0, par[5], impar[5];

    par[0] = impar[0] = 0;

    for (i=1; i<=15; i++)
    {
        scanf("%d", &n);
        if (n % 2 == 0)
        {
            par[p] = n;
            p++;
        }
        else
        {
            impar[q] = n;
            q++;
        }
        if (p == 5)
        {
            for (j=0; j<5; j++)
            {
                printf("par[%d] = %d\n", j, par[j]);
                par[j] = 0;
            }
            p = 0;
        }
        if (q == 5)
        {
            for (j=0; j<5; j++)
            {
                printf("impar[%d] = %d\n", j, impar[j]);
                impar[j] = 0;
            }
            q = 0;
        }
    }
    for (i=0; i<5; i++)
    {
        if (impar[i] == 0)
            break;
        printf("impar[%d] = %d\n", i, impar[i]);
    }
     for (i=0; i<5; i++)
    {
        if (par[i] == 0)
            break;
        printf("par[%d] = %d\n", i, par[i]);
    }


return 0;
}
