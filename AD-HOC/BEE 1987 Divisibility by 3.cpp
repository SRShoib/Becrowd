#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    string s;

    while (cin >> a >> s)
    {
        long long sum = 0;
        for (int i =0; i<s.size(); i++)
        {
            sum += s[i] - 48;
        }
        cout << sum << " ";
        if (sum % 3 == 0)
            cout << "sim" << endl;
        else
            cout << "nao" << endl;
    }

return 0;
}
