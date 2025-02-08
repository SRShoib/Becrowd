#include <bits/stdc++.h>
using namespace std;

int main(){
    int r1, r2, x1, x2, y1, y2;
    float distance;

    while (cin >>r1>>x1>>y1>>r2>>x2>>y2)
    {
        distance = pow(x2-x1, 2) + pow(y2-y1, 2);

        if (r1 >= sqrt(distance) + r2)
            cout << "RICO" << endl;
        else
            cout << "MORTO" << endl;
    }


return 0;
}
