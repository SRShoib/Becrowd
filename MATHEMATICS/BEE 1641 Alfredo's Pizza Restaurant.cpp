#include <bits/stdc++.h>
using namespace std;

int main(){
    int r, w, l, i = 0;
    double d;

    while (1)
    {
        i++;
        cin >> r;
        if (r == 0)
            break;
        cin >> w >> l;

        d = sqrt((w*w) + (l*l));
        if ((r*2) >= d)
            cout << "Pizza " << i << " fits on the table." << endl;
        else
            cout << "Pizza " << i << " does not fit on the table." << endl;
    }



return 0;
}
