#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d, k;
        cin >> a >> b >> c >> d >> k;
        int ans1 = a / c + (a % c == 0 ? 0 : 1);
        int ans2 = b / d + (b % d == 0 ? 0 : 1);
        if (ans1 + ans2 > k)
            cout << -1 << endl;
        else
            cout << ans1 << " " << ans2 << endl;
    }
    return 0;
}
