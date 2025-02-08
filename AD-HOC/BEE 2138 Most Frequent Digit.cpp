#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;

    while (cin >> s)
    {

        int t[10];
        for (int i=0; i<10; i++)
            t[i] = '\0';
        for (int i=0; i<s.length(); i++)
        {
            switch (s[i])
            {
                case '0': t[0]++; break;
                case '1': t[1]++; break;
                case '2': t[2]++; break;
                case '3': t[3]++; break;
                case '4': t[4]++; break;
                case '5': t[5]++; break;
                case '6': t[6]++; break;
                case '7': t[7]++; break;
                case '8': t[8]++; break;
                case '9': t[9]++; break;

            }
        }
        int x;
        for (int i=0; i<10; i++)
        {
            if (*max_element(t, t+10) == t[i])
                x = i;
        }

        cout << x << endl;
    }



return 0;
}
