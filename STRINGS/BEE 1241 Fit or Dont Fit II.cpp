#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string a, b;
    getchar();
    while (n--)
    {
        cin >> a >> b;
        int p = 1;
        for (int i=a.size()-b.size(),j=0; i<a.size(); i++, j++)
        {
            if (a[i] != b[j])
                p = 0;
        }
        if (p == 1 && a.size() >= b.size())
            cout << "encaixa" << endl;
        else
            cout << "nao encaixa" << endl;

    }



return 0;
}
