#include <bits/stdc++.h>
using namespace std;

long long pascal(int n);
int main(){
    int n, x;
    cin >> n;

    while (n--)
    {
        cin >> x;
        cout << pascal(x) << endl;
    }

return 0;
}
long long pascal(int n)
{
    if (n == 1)
        return 1;
    return (pascal(n-1)*2)+1;
}
