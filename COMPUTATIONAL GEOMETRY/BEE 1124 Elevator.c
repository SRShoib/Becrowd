#include <stdio.h>
int main(){
    int l, c, r1, r2, L, d;

    while (1)
    {
        scanf("%d%d%d%d", &l, &c, &r1, &r2);
        if (l == 0 && c == 0 && r1 == 0 && r2 == 0)
            break;
        l = (r1 + r2) * 2;
        d = sqrt(l*l + c*c);

        if (l >= c && (l >= L && r1*2 <= c && r2 * 2 <= c))
            printf("S\n");
        else if (c >= l && (c >= L && r1*2 <= l && r2 * 2 <= l))
            printf("S\n");
        else if (d >= L && r1*2 <= c && r2*2 <= l)
            printf("S\n");
        else
            printf("N\n");
    }

return 0;
}
