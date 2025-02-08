#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin >> a;
    int n[a];

    for (int i=0; i<a; i++)
    {
        cin >> n[i];
    }
    sort(n, n+a);
    for (int i=0; i<a; i++)
    {int p = 1;
        for (int j=i+1; j<a; j++)
        {
            if (n[i] == n[j])
                p++;
        }
        if (n[i] == n[i-1] && i > 0)
            continue;
        cout << n[i] << " aparece " << p << " vez(es)" << endl;
    }

return 0;
}
