#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int t, sx, sy, n;
        cin >> t >> sx >> sy >> n;
        bool flag = true;
        int ex = 0, ey = 0, x = 0, y = 0;
        for (int i = 1; i <= n; ++i)
        {
            int ai, bi, d;
            cin >> ai >> bi >> d;
            if (i == 0)
                ex = ai, ey = bi;
            else if (flag)
            {
                int a = (ai < ex ? ex - ai : ai - ex) * t;
                int b = (bi < ey ? ey - bi : bi - ey) * t;
                ex = ai, ey = bi;
                x = a + x;
                y = y + b;
                if (x > sx || y > sy)
                    flag = false;
                d == 0 ? x = 0 : y = 0;
            }
        }
        cout << (flag ? "YES\n" : "NO\n");
    }
    return 0;
}