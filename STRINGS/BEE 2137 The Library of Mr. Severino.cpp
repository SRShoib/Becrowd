#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    while (cin >> n)
    {
        getchar();
        string s[n];
        for (int i=0; i<n; i++)
        {
            cin >> s[i];
        }
        sort(s, s+n);
        for (int i=0; i<n; i++)
            cout <<  s[i] << endl;
    }


return 0;
}
