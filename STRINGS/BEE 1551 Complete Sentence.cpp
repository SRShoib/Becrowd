#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s;
    cin >> n;

    getchar();
    while (n--)
    {
        getline(cin, s);
        sort(s.begin(), s.end());
        int sum = 0;
        for (int i=0; i<s.size(); i++)
        {
            if (isalpha(s[i]))
            {
                if (s[i] != s[i-1])
                    sum++;
            }
        }
        if (sum == 26)
            cout << "frase completa" << endl;
        else if (sum >= 13)
            cout << "frase quase completa" << endl;
        else
            cout << "frase mal elaborada" << endl;
    }

return 0;
}
