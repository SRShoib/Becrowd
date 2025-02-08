#include <bits/stdc++.h>
using namespace std;

int main(){
    char a;
    string b;

    while (1)
    {
        cin >> a >> b;
        if (a == '0' && b == "0")
            break;
        int g = 0;;
        for (int i=0; i<b.size(); i++)
        {
            if (b[i] == '0')
            {
                if (g != 0)
                    cout << b[i];
            }
            else if (b[i] != a)
                {
                    cout << b[i];
                    g = 1;
                }
        }
        if (g == 0)
            cout << 0 << endl;
        else
            cout << endl;

    }


return 0;
}
