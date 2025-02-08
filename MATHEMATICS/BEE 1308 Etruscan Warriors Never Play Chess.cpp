#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, x;
    cin >> n;

    while (n--)
    {
        cin >> x;
        long long y = (-1 + sqrt(1+8*x))/2;
        cout << y << endl;
    }
return 0;
}

