#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int q, r;
    q = a / b;
    r = a % b;

    if (a < 0)
    {
        if (q > 0)
            q++;
        else if (q < 0)
            q--;
        r = a - (b * q);
    }
    cout << q << " " << r << endl;

return 0;
}
