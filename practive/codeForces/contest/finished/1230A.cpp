#include <bits/stdc++.h>
using namespace std;

bool is(int a, int b, int c, int d)
{
    if ((a + b + c + d) % 2 == 1)
        return false;
    if (a + b == c + d || a + c == b + d || a + d == b + c)
        return true;
    if (a == b + c + d || b == a + c + d || c == a + b + d || d == a + b + c)
        return true;
    return false;
}

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (is(a, b, c, d))
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}
