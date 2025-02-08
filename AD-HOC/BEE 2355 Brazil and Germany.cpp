#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;

    while (1)
    {
        cin >> n;
        if (n == 0)
            break;
        double d = n / 90.0;
        int bra, ger;
        bra = floor(d);
        ger = ceil(d * 7);

        cout << "Brasil " << bra << " x Alemanha " << ger << endl;
    }


return 0;
}
