#include <bits/stdc++.h>
using namespace std;

bool is(long long x)
{
    return x != 1;
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        long long x, y; cin >> x >> y;
        long long z = x - y;
        if(is(z))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
