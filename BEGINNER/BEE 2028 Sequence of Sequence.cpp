#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, c = 0, k = 0;

    while (cin >> n)
    {
        c++;
        k = 1;
        for (int i=1; i<=n; i++)
        {
            for (int j=1; j<=i; j++)
            {
                k++;
            }
        }
        if (n == 0){
            cout << "Caso " << c << ": " << 1 << " numero" << endl;
            cout << 0 << endl << endl;
            continue;
        }
        cout << "Caso " << c << ": " << k << " numeros" << endl;
        cout << 0;

        for (int i=1; i<=n; i++)
        {
            for (int j=1; j<=i; j++)
            {
                cout << " " << i;
            }
        }
        cout << endl << endl;
    }
return 0;
}
