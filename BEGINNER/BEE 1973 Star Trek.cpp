#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while (1)
    {
        cin >> n;
        if (n == 0)
            break;
        int a[n][n], p = 0, q = n, c, e = n;
        int hn = n/2;
        if (n % 2 == 1)hn++;
        for (int i=1; i<=hn; i++)
        {
            int t = e, u = 0;
            for (int j=p; j<q; j++)
            {
                int s = e, v = 0;
                for (int k=p; k<q; k++)
                {
                    if (j == p)
                        a[j][k] = v+1;
                    if (k == p)
                        a[j][k] = u+1;
                    if (k == q-1)
                    {
                        a[j][k] = t;
                    }
                    if (j == q-1)
                        a[j][k] = s;
                    s--;v++;

                }
                t--;u++;
            }
            p++; e -=2;
            q--;
        }
        for (int i=0; i<n; i++)
        {
            for (int j=0; j<n; j++)
            {
                if (j == 0)
                    printf("%3d", a[i][j]);
                else
                    printf(" %3d", a[i][j]);
            }
            cout << endl;
        }
        cout << endl;
    }

return 0;
}

