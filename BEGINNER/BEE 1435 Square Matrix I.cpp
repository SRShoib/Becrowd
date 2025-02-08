#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    while (1)
    {
        cin >> n;
        if (n == 0)
            break;
        int a[n][n], p = 0, q = n, c;
        int hn = n/2;
        if (n % 2 == 1)hn++;
        for (int i=1; i<=hn; i++)
        {
            for (int j=p; j<q; j++)
            {
                for (int k=p; k<q; k++)
                {
                    a[j][k] = i;
                }
            }
            p++;
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
