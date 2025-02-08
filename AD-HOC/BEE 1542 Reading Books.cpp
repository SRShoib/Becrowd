#include <bits/stdc++.h>
using namespace std;

int main(){
    int q, d, p;
    while (cin >> q && q)
    {
        cin >> d >> p;
        cout << (q*d*p) / (p-q);
        if ((q*d*p)/(p-q) > 1)
            cout << " paginas" << endl;
        else
            cout << " pagina" << endl;
    }

return 0;
}
