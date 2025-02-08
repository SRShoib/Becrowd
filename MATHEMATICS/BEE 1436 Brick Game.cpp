#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, n;
    cin >> t;

    for (int i=1; i<=t; i++)
    {
        cin >> n;
        int a[n];
        for (int j=0; j<n; j++)
        {
            cin >> a[j];
        }
        cout << "Case " << i << ": " << a[(n/2)] << endl;
    }


return 0;
}
