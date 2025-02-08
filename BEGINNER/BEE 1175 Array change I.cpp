#include <bits/stdc++.h>
using namespace std;

int main(){
    int n[20];

    for (int i=0; i<20; i++)
        cin >> n[i];
    reverse(n, n+20);
    for (int i=0; i<20; i++)
    {
        cout << "N[" << i << "] = " << n[i] << endl;
    }

return 0;
}
