#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, day = 0;
    float a, sum = 0;
    string s;
    cin >> n;

    for (int i=1; i<=n; i++)
    {
        cin >> a >> s;
        int count = 0;
        for (int j=0; j<s.size(); j++)
        {
            if (s[j] == ' ')
                count++;
        }
        sum += a;
        day += a / count;

        cout << "day " << i <<": " << int(a/count) << " kg" << endl;
    }
    printf("%.2f kg by day\n", sum/(n*1.0));
    printf("R$ %.2f by day\n", day/(n*1.0));

    return 0;
}