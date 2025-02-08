#include <stdio.h>
int main(){
    int m, n, i, temp, sum = 0;

    while (1)
    {
        scanf("%d%d", &m, &n);

        if (m <= 0 || n <= 0)
            break;
        else
        {
            if (m > n)
            {
                m = m;
                n = n;
            }
            else
            {
                temp = m;
                m = n;
                n = temp;
            }
            for (i=n; i<=m; i++)
            {
                printf("%d ", i);
                sum += i;
            }
            printf("Sum=%d\n", sum);
            sum = 0;
        }
    }

return 0;
}
