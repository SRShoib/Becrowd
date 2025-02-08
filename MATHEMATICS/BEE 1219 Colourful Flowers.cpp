#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;

    while (cin >> a >> b >> c)
    {
        double s, rose, vio, sun;
        s = (a + b + c) / 2;
        rose = pow((sqrt(s*(s-a)*(s-b)*(s-c))/s), 2) * M_PI;
        int e= (a+b+c) - (max({a, b, c}) + min({a, b, c}));
        int f = max({a, b, c});
        int d = min({a, b, c});
        vio = ((d*e)/2) - rose;
        sun = (pow(f/2, 2)) - vio;
        printf("%.4lf %.4lf %.4lf\n", sun, vio, rose);
    }
return 0;
}
