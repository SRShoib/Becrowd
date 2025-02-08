#include <stdio.h>
int main(){
    long long m, e;
    int x;

    while (1)
    {
        scanf("%d%lld", &x, &m);
        if (x == 0 && m == 0)
            break;
        e = x * m;
        printf("%lld\n", e);
    }

return 0;
}
