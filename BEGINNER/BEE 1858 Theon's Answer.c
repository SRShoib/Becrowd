#include <stdio.h>
int main(){
    int i, n, t, min, ans;
    scanf("%d", &n);

    for (i=1; i<=n; i++)
    {
        scanf("%d", &t);
        if (i == 1)
        {
            min = t;
            ans = i;
        }

        else
        {
            if (t < min)
            {
                min = t;
                ans = i;
            }
        }

    }
    printf("%d\n", ans);

return 0;
}
