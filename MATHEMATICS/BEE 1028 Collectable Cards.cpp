#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, a, b;
    cin >> n;

    while (n--)
    {
        cin >> a >> b;
        if (b > a)
            swap(a, b);
        while (1)
        {
            if (a % b == 0)
                break;
            int temp = a % b;
            a = b;
            b = temp;
        }
        cout << b << endl;
    }

return 0;
}
