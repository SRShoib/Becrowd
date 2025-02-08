#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, n, a;
    string s;

    while (cin >> t >> n && t)
    {
        int sum = 0;
        while (t--)
        {
            cin >> s >> a;
            sum += a;
        }
        cout << (3*n) - sum <<  endl;
    }


return 0;
}
