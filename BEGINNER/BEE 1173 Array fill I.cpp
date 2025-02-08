#include <bits/stdc++.h>
using namespace std;

int main(){
    int v, n[10];
    cin >> v;
    n[0] = v;
    cout << "N[" << 0 << "] = " << n[0] << endl;

    for (int i=1; i<10; i++)
    {
        n[i] = v * 2;
        cout << "N[" << i << "] = " << n[i] << endl;
        v *= 2;
    }



return 0;
}
