#include <stdio.h>
int main(){
    int n, p, q, m;
    char c;
    scanf("%d%d %c %d", &n, &p, &c, &q);

    if (c == '+')
    {
        if(p + q <= n)
            printf("OK\n");
        else
            printf("OVERFLOW\n");
    }
    else if (c == '*')
    {
        if (p * q <= n)
            printf("OK\n");
        else
            printf("OVERFLOW\n");
    }


return 0;
}
