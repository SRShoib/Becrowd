#include <stdio.h>
int main(){
    int n, a1, a2, b1, b2, c1, c2, d1, d2, r1, r2;
    scanf("%d", &n);

    for (int i=1; i<=n; i++)
    {
        scanf("%d%d%d%d%d%d%d%d%d%d", &a1, &a2, &b1, &b2, &c1, &c2, &d1, &d2, &r1, &r2);
        if (r1 >= a1 && r2 >= a2 && r1 <= b1 && r2 >= b2 && r1 <= c1 && r2 <= c2 && r1 >= d1 && r2 <= d2)
            printf("1\n");
        else
            printf("0\n");
    }

return 0;
}
