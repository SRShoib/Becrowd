#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int p = 0;
    cin >> s;

    for (int i=0; i<s.length(); i++)
    {
        if (s[i] == '1')
            p++;
    }
    if (p % 2 == 0)
        s.insert(s.length(), "0");
    else
        s.insert(s.length(), "1");
    cout << s << endl;



return 0;
}
