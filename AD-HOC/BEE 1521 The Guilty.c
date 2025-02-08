#include <stdio.h>
int main(){
    int N, k;

    while (1)
    {
        scanf("%d", &N);
        if (N == 0)
            break;
        int n[N+1], p = 1;
        for (int i=1; i<=N; i++)
        {
            scanf("%d", &n[i]);
        }
        scanf("%d", &k);

        while (n[k] != k)
            k = n[k];
        printf("%d\n", k);

    }


return 0;
}
