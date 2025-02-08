#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    char c;

    while (cin >> n && n)
    {
        int sum = 0;
        while (n--)
        {
            cin >> c;
            if (c == 'D')
                sum += 1;
            else
                sum -= 1;
            if (sum == 4 || sum == -4)
                sum = 0;
        }
        if (sum == 0)
            cout << "N" << endl;
        else if (sum == 1 || sum == -3)
            cout << "L" << endl;
        else if (sum == 2 || sum == -2)
            cout << "S" << endl;
        else if (sum == 3 || sum == -1)
            cout << "O" << endl;
    }

return 0;
}
