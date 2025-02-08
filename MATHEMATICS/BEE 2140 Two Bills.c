#include <stdio.h>
int main(){
    int i, n, m;

    while (1)
    {
        scanf("%d%d", &n, &m);
        if (n == 0 || m == 0)
            break;
        else
        {
            if ((m - n) == (2 + 5) || (m - n) == (2 + 10) || (m - n) == (2 + 20) || (m - n) == (2 + 50) || (m - n) == (2 + 100) || (m - n) == (5 + 10) ||
                (m - n) == (5 + 20) || (m - n) == (5 + 50) || (m - n) == (5 + 100) || (m - n) == (10 + 20) || (m - n) == (10 + 50) || (m - n) == (10 + 100) ||
                (m - n) == (20 + 50) || (m - n) == (20 + 100) || (m - n) == (50 + 100))
            {
                printf("possible\n");
            }
            else
                printf("impossible\n");
        }
    }

return 0;
}
