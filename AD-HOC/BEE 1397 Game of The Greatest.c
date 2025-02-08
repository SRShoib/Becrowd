#include <stdio.h>
int main(){
    int n, a, b, scoreA = 0, scoreB = 0, i;

    while (1)
    {
        scanf("%d", &n);

        if (n == 0)
            break;
        else
        {
            if (n > 0 && n <= 10)
            {
                for (i=1; i<=n; i++)
                {
                    scanf("%d%d", &a, &b);
                    if (a > b)
                        scoreA++;
                    else if (b > a)
                        scoreB++;
                }
                printf("%d %d\n", scoreA, scoreB);
                scoreA = 0;
                scoreB = 0;
            }
        }
    }


return 0;
}
