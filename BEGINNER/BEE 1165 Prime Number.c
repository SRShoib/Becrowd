#include <stdio.h>
int isPrime(int n);
int main(){
    int n, x;
    scanf("%d", &n);

    while (n--)
    {
        scanf("%d", &x);
        if (isPrime(x) && x != 1)
            printf("%d eh primo\n", x);
        else
            printf("%d nao eh primo\n", x);
    }

return 0;
}
int isPrime(int n)
{
    for (int i=2; i<=n/2; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
