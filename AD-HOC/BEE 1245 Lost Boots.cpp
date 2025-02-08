#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    while (cin >> n)
    {
        int a[n], count = 0; char c[n+1];
        for (int i=0; i<n; i++)
            cin >> a[i] >> c[i];
        for (int i=0; i<n; i++)
        {
            for (int j=i+1; j<n; j++)
            {
                if (a[i] == a[j] && (c[i] != c[j]))
                {
                    count++;
                    a[i] = a[j] = '\0';
                    c[i] = c[j] = '\0';
                }
            }
        }
        cout << count << endl;
    }


return 0;
}
