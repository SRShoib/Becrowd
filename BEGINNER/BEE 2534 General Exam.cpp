#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, q;

    while (cin >> n >> q)
    {
        int a[n], p;
        for (int i=0; i<n; i++)
            cin >> a[i];
        sort(a, a+n, greater<int>());
        for (int i=0; i<q; i++)
        {
            cin >> p;
            cout << a[p-1] << endl;
        }
    }

return 0;
}
