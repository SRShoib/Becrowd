#include <stdio.h>

long long int fact(int n);
int main(){
    int a, b;

    while (scanf("%d%d", &a, &b) != EOF)
    {
        printf("%lld\n", fact(a) + fact(b));
    }

return 0;
}
long long int fact(int n)
{
    if (n == 0)
        return 1;
    return n * fact(n-1);
}
