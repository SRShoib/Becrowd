#include <bits/stdc++.h>
using namespace std;

#define MAXSIZE 100100
long long fibo(int n);
long long fib(int n);
long long fi[MAXSIZE];
long long fibot[MAXSIZE];

int main(){
    int n;
    cin >> n;
    cout << fib(n);

return 0;
}
long long fibo(int n)
{
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;
    return fibo(n-1) + fibo(n-2);
}
long long fib(int n)
{
    for (int i=0; i<MAXSIZE; i++)
    {
        fi[i] = fibo(i+1);
    }
    int c = 0;
    for (int i=1; i<=MAXSIZE; i++)
    {
       int no = 1;
        for (int j=0; j<MAXSIZE; j++)
        {
            if (i == fi[j])
            {
                no = 0;
                break;
            }
        }
        if (no == 1)
        {
            fibot[c] = i;
            c++;
        }
    }
    return fibot[n+1];
}
