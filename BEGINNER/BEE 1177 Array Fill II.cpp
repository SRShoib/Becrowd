#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, n[1000], p = 0;
    cin >> t;

    for (int i=0; i<1000; i++)
    {
        cout << "N[" << i << "] = " << p << endl;
        p++;
        if (p == t)
            p = 0;
    }

return 0;
}
