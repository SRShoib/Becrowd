#include <bits/stdc++.h>
using namespace std;

int  main(){
    int n;
    cin >> n;
    int r[n];

    for (int i=0; i<n; i++)
    {
        cin >> r[i];
        if (i > 0)
        {
            if (r[i] < r[i-1])
            {
                cout << i+1 << endl;
                return 0;
            }
        }
    }
    cout << 0 << endl;



return 0;
}
