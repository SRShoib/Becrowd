#include <bits/stdc++.h>
using namespace std;

    int main(){
    int n, pa, pb, i;
    float g1, g2;
    cin >> n;

    while (n--)
    {
        cin >> pa >> pb >> g1 >> g2;
        i = 0;
        while (pa <= pb)
        {
            pa += (pa * g1) / 100;
            pb += (pb * g2) / 100;
            i++;
            if (i > 100)
            {
                cout << "Mais de 1 seculo." << endl;
                break;
            }
        }
        if ( i<= 100)
            cout << i << " anos." << endl;
    }

    return 0;
}