#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, a, b;

    while (cin >> n >> a >> b && n && a && b)
    {
        int count = 0;
        for (int i=1; i<=n; i++)
        {
            if (i % 2 == 0 || i % 3 == 0)
                {
                    count++;
                    cout << i << " ";
                }
        }
        cout << count << endl;
    }

return 0;
}
