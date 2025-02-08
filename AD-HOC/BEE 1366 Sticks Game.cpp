#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, c, v;

    while (cin >> n && n)
    {
        int sum = 0;
        while (n--)
        {
            cin >> c >> v;
            sum += v/2;
        }
        cout << sum / 2 << endl;
    }
return 0;
}
