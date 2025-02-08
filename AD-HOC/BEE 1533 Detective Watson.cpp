#include <bits/stdc++.h>
using namespace std;

int main(){
    int  n, p;
    while (1)
    {
        cin >> n;
        if (n == 0)
            break;
        int v[n];

        for (int i=0; i<n; i++)
            cin >> v[i];
        int max = *max_element(v, v+n);
        int max2 = INT_MIN;

        for (int i=0; i<n; i++)
        {
            if (v[i] >  max2 && v[i] < max)
                {
                    max2 = v[i];
                    p = i+1;
                }
        }
        cout <<  p << endl;
    }



return 0;
}
