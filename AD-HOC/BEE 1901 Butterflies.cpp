#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    set<int> s;

    while (cin >> n)
    {
        int a[n][n], c, d;
        s.clear();

        for (int i=0; i<n; i++)
            for (int j=0; j<n; j++)
                cin >> a[i][j];

        n = n*2;
        while (n--)
        {
            cin >> c >> d;
            c--; d--;
            s.insert(a[c][d]);

        }
        cout << s.size() << endl;
    }

return 0;
}
