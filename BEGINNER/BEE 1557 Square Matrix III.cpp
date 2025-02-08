#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    while (1)
    {
        cin >> n;
        if (n == 0)
            break;
        int a[n][n], v = 1;
        string o = to_string(int(pow(4, n-1)));
            for (int i=0; i<n; i++)
            {
                int t = v;
                for (int j=0; j<n; j++)
                {
                    if (j == 0)
                        a[i][j] = t;
                    else
                    {
                        a[i][j] = t * 2;
                        t *= 2;
                    }
                }
                v *= 2;
            }
        for (int i=0; i<n; i++)
        {
            for (int j=0; j<n; j++)
            {
                if (j == 0)
                    printf("%*d", o.size(), a[i][j]);
                else
                    printf(" %*d", o.size(), a[i][j]);
            }
            cout << endl;
        }
        cout << endl;
    }

return 0;
}
