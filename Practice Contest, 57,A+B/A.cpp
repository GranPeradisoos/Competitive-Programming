#include <bits/stdc++.h>
using namespace std;

int main()
{
    long a, b, c;

    while (cin >> a >> b)
    {
        if (a > b)
        {
            cout << a - b << endl;
        }
        else
        {
            cout << b - a << endl;
        }
    }

    return 0;
}
