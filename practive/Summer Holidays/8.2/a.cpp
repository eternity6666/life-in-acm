#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("in.txt", "r", stdin);
    long c, n;
    cin >> c >> n;
    if ( c > n)
        cout << -1 << endl;
    else if ( 2 * c > n)
    {
        cout << c * c << endl;
    }
    else {
        int a = n / c;
        cout << a * (a - 1) * c * c << endl;
    }
    return 0;
}
