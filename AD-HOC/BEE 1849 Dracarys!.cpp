#include <bits/stdc++.h>
using namespace std;

int main(){
    int l1, l2, c1, c2, a, b;
    cin >> l1 >> c1 >> l2 >> c2;

    a = min(max(l1, c1), max(l2, c2));
    b = min(l1, c1) + min(l2, c2);

    cout << min(a, b) * min(a, b) << endl;


return 0;
}
