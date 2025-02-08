#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, a[6], b[6];
    cin >> n;

    while (n--)
    {
        int sum = 0, s = 0;
        for (int i=0; i<6; i++)
        {
            cin >> a[i];
            if (a[i] >= 1 && a[i] <= 6)
                sum++;
            b[i] = a[i];
        }
        sort(b, b+6);
        for (int i=0; i<6; i++)
        {
            if (b[i] == b[i-1] && i > 0)
                continue;
            s += b[i];
        }

        if (a[0] + a[5] == 7 && a[1] + a[3] == 7 && a[2] + a[4] == 7 && sum == 6 && s == 21)
            cout << "SIM" << endl;
        else
            cout << "NAO" << endl;

    }

return 0;
}
