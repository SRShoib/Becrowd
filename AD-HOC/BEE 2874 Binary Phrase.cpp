#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int n;

    while (cin >> n)
    {
        int arr[n];
        for (int i=0; i<n; i++)
        {
            cin >> s;
            int p = s.size() - 1;
            int bin = 0;
            for (int j=0; j<s.size(); j++)
            {
                bin += (s[j] - 48) * pow(2, p);
                p--;
            }
            arr[i] = bin;
        }
        for (int i=0; i<n; i++)
        {
            cout << char(arr[i]);
        }
        cout << endl;
    }


return 0;
}
