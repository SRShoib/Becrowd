#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;

    while (1)
    {
        cin >> n >> m;
        if (n == 0 && m == 0)
            break;
        int t[m];
        for (int i=0; i<m; i++)
        {
            cin >> t[i];
        }
        int q = 0;
        for (int i=1; i<=n; i++)
        {
            int p = 0;
            for (int j=0; j<m; j++)
            {
                if (i == t[j])
                    p++;
            }
            if (p >= 2)
                q++;
        }
        cout << q << endl;
    }


return 0;
}
