#include <stdio.h>
#include <math.h>

int isprime(int n);
int issuperprime(int n);

int main(){
    int n, i;

    while (scanf("%d", &n) != EOF)
    {
        if (!isprime(n))
            printf("Nada\n");
        else
        {
            if (issuperprime(n))
                printf("Super\n");
            else
                printf("Primo\n");
        }
    }

return 0;
}
int isprime(int n){
    int i;

    if (n == 1 || n == 1)
        return 0;
    for (i=2; i<=sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int issuperprime(int n)
{
    int i, digit, temp = n;
    int issuper = 1;
        while (temp != 0)
        {
            digit = temp % 10;
            if (!isprime(digit))
                issuper = 0;
            temp /= 10;
        }
        if (issuper == 1)
            return 1;
        else if (issuper != 1)
            return 0;

}
