#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;

    while (1)
    {
        cin >> a >> b >> c;
        if (a == 0 && b == 0 && c == 0)
            break;
        cout << int(cbrt(a*b*c)) << endl;
    }

return 0;
}
