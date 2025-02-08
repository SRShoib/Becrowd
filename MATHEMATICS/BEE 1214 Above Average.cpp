#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x;
    cin >> n;

    while (n--)
    {
        cin >> x;
        int c[x], sum = 0, p = 0;
        for (int i=0; i<x; i++)
        {
            cin >> c[i];
            sum += c[i];
        }
        for (int i=0; i<x; i++)
        {
            if (c[i] > (sum /(x*1.0)))
                p++;
        }
        printf("%.3f%%\n", (p*100)/(x*1.0));
    }


return 0;
}
