#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    while (cin >> n && n)
    {
        int p = 0;
        for (int i=1; p+i<=n; i++)
            p += i;
        cout << p << " " << n - p << endl;
    }


return 0;
}
