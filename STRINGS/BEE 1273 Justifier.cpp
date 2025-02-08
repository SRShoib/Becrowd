#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    for (int t=0; ;t++)
    {
        cin >> n;
        if (n == 0)
            break;
        if (t > 0)
            cout << endl;
        string s[n];
        int l[n];

        for (int i=0; i<n; i++)
        {
            cin >> s[i];
            l[i] = s[i].size();

        }
        for (int i=0; i<n; i++)
        {
            cout << setw(*max_element(l, l+n)) << s[i] << endl;
        }
    }


return 0;
}
