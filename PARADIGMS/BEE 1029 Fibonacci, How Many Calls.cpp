#include <bits/stdc++.h>
using namespace std;

int call = 0;
long long fibo(int a);

int main(){
    int n, x;
    cin >> n;

    while (n--)
    {
        cin >> x;
        long long p = fibo(x);
        cout << "fib(" << x << ") = " << call-1 << " calls = " << p << endl;
        call = 0;
    }

return 0;
}
long long fibo(int a)
{
    call++;
    if (a == 0)
        return 0;
    if (a == 1)
        return 1;
    return fibo(a-1) + fibo(a-2);
}
