#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, a;
    cin >> n;

    while (n--)
    {
        cin >> a;
        int sum = 0;
        for (int i=1; i<=a/2; i++)
        {
            if (a % i == 0)
                sum += i;
        }
        if (sum == a)
            cout << a << " eh perfeito" << endl;
        else
            cout << a << " nao eh perfeito" << endl;
    }

    return 0;
}