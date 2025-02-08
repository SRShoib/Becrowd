#include <bits/stdc++.h>
using namespace std;

int main(){
    long a, b;

    while (1)
    {
        cin >> a >> b;
        if (a == 0 && b == 0)
            break;
        int x, y, count = 0, c = 0;
        while (a !=0 || b != 0)
        {
            x = a % 10;
            y = b % 10;
            if (x + y + c >= 10)
                {
                    count++;
                    c = 1;
                }
                else
                    c = 0;
            a /= 10;
            b /= 10;
        }
        if (count == 0)
            cout << "No carry operation." << endl;
        else if (count == 1)
            cout << "1 carry operation." << endl;
        else
            cout << count << " carry operations." << endl;
    }

return 0;
}
