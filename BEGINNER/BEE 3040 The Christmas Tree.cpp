#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, h, d, g;
    cin >> n;

    while (n--)
    {
        cin >> h >> d >> g;
        if (h >= 200 && h <= 300 && d >= 50 && g >= 150)
            cout << "Sim" << endl;
        else
            cout << "Nao" << endl;
    }


return 0;
}
