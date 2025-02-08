#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b;

    while (cin >> a >> b && a && b)
    {
        int c, d, count = 0;
        set<int> x;
        set<int> y;
        for (int i=0; i<a; i++)
            {
                cin >> c;
                x.insert(c);
            }
        for (int i=0; i<b; i++)
            {
                cin >> d;
                y.insert(d);
            }
        int t = x.compare(y);

        cout << t << endl;
    }


return 0;
}
