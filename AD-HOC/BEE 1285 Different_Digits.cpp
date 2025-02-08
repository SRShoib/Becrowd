#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b;

    while (cin >> a >> b)
    {
        int count = 0;
        for (int i=a; i<=b; i++)
        {
            set<int> s;
             s.clear();
            int j = 0;
            int n = i;
            while(n != 0)
            {
                s.insert(n%10);
                n /= 10;
                j++;
            }
            if (j == s.size())
                count++;
        }
        cout << count << endl;
    }


    return 0;
}