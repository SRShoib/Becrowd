#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s, st[26];
    getchar();
    while(n--)
    {
        getline(cin, s);
        int p = 0, t = 0;
        for (int i=0; i<s.size(); i++)
        {
            if (s[i] = ' ')
            {
                p++;
                t = 0;
            }
            st[p][t] = s[i];
            t++;
        }
        for (int i=0; i<26; i++)
            cout << st[i] << endl;
    }



return 0;
}
