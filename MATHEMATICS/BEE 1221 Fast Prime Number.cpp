#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    long x;
    cin >> n;

    while (n--)
    {
        cin >> x;
        int p = 1;
        if (x == 0 || x == 1)
        {
            cout << "Not Prime" << endl;
            continue;
        }
        for (int i=2; i<=sqrt(x); i++)
        {
            if (x % i == 0)
            {
                cout << "Not Prime" << endl;
                p = 0;
                break;

            }
        }
        if (p == 1)
            cout << "Prime" << endl;
    }

return 0;
}
