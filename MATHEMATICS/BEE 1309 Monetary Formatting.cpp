#include <bits/stdc++.h>
using namespace std;

int main(){
    string a, b;

    while(cin >> a >> b)
    {
        if (b.size() < 2)
            a = a + ".0" + b;
        else
            a = a + "." + b;
        if (a.size()-6 > 0 && a.size() >= 6)
            a.insert((a.size()-6), ",");
        if (a.size()-10 > 0 && a.size() >= 10)
            a.insert((a.size()-10), ",");
        if (a.size()-14 > 0 && a.size() >= 14)
            a.insert((a.size()-14), ",");

        a = "$" + a;
        cout << a << endl;
    }

return 0;
}
