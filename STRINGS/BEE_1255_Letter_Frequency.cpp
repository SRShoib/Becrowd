#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    getchar();
    while (n--)
    {
        getline(cin, s);
        int a[26];
        for (int i=0; i<s.size(); i++)
            if (isupper(s[i]))
                s[i] = tolower(s[i]);
        int j = 0;
        for (char i='a'; i<='z'; i++)
        {
            a[j] = count(s.begin(), s.end(), i);
            j++;
        }
        for (char i='a'; i<='z'; i++)
        {
            if (*max_element(a, a+26) == count(s.begin(), s.end(), i))
             cout << i;
        }
        cout << endl;
    }

    return 0;
}