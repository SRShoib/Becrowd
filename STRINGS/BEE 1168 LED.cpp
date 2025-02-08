#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s;
    cin >> n;

    while (n--)
    {
        cin >> s;
        int leds = 0;

        for (int i=0; i<s.length(); i++)
        {
            if(s[i] == '1') leds += 2;
            if(s[i] == '2') leds += 5;
            if(s[i] == '3') leds += 5;
            if(s[i] == '4') leds += 4;
            if(s[i] == '5') leds += 5;
            if(s[i] == '6') leds += 6;
            if(s[i] == '7') leds += 3;
            if(s[i] == '8') leds += 7;
            if(s[i] == '9') leds += 6;
            if(s[i] == '0') leds += 6;
        }
        cout << leds << " leds" << endl;
    }
return 0;
}
