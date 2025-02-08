#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    while (cin >> n && n)
    {
        string s[n];
        int year[n], d;
        for (int i=0; i<n; i++)
        {
            cin >> s[i] >> year[i] >> d;
            year[i] = year[i] - d;
        }
        for (int i=0; i<n; i++)
        {
            if (*min_element(year, year+n) == year[i])
            {
                cout << s[i] << endl;
                break;
            }
        }
    }

    return 0;
}