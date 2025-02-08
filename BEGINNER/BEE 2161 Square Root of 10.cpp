#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    double a;
    cin >> n;
    if (n == 0)
        a = 0.0000000000;
    if (n == 1)
        a = 0.1666666667;
    for (int i=2; i<=n; i++)
    {
        if (i == 2)
        {
            a = 6 + (1.0/6.0);
            a = 1.0 / a;
        }
        else
        {
            a = 6 + a;
            a = 1.0 / a;
        }
    }
    a = 3 + a;
    printf("%.10lf\n", a);

return 0;
}
