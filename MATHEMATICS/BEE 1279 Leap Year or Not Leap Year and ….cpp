#include <bits/stdc++.h>
using namespace std;

int main(){
    int year;

    while (cin >> year)
    {
        int c = 0;
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        {
            cout << "This is leap year." << endl;
            if (year % 15 == 0)
            cout << "This is huluculu festival year." << endl;
            if (year % 55 == 0)
                cout << "This is bulukulu festival year." << endl;
            cout << endl;
            c = 1;
        }

        else
        {
            if (year % 15 == 0)
            {
                cout << "This is huluculu festival year." << endl << endl;
                c = 1;
            }
        }

        if (c == 0)
            cout << "This is an ordinary year." << endl << endl;

    }

return 0;
}
