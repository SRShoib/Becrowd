#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    getchar();
    string s;

    while (n--)
    {
        getline(cin, s);
        int t[123];
        for (int i=0; i<123; i++)
            t[i] = 0;

        int q = 0;
        for (int i=0; i<s.length(); i++)
        {

                if (isupper(s[i]))
                    s[i] = tolower(s[i]);
                if(isalpha(s[i]))
                {
                    int p = s[i];
                    t[p]++;
                }

        }
        int y = *max_element(t, t+123);
        for (int i=97; i<123; i++)
        {
            if (t[i] == y)
            cout << char(i);
        }
            cout << endl;
    }

return 0;
}
