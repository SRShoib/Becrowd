#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;

    while (getline(cin, s))
    {
        for (int i=0; i<s.size(); i++)
        {
            if (s[i] == ' ' && (s[i+1] == ',' || s[i+1] == '.'))
            continue;
            cout << s[i];
        }
        cout << endl;
    }

return 0;
}
