#include <bits/stdc++.h>
using namespace std;
const int maxn = 1005;
typedef pair<int, int> P;

set<P> se;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
        {
            char c;
            cin >> c;
            if (c == '1')
            {
                int x = i - k + 1 < 1 ? 1 : i - k + 1;
                int y = j - k + 1 < 1 ? 1 : j - k + 1;
                for (int a = x; a <= i; ++a)
                    for (int b = y; b <= j; ++b)
                        if (a + k - 1 <= n && b + k - 1 <= m)
                            se.insert(P(a, b));
            }
        }
    set<P>::iterator it;
    for (it = se.begin(); it != se.end(); it++)
        cout << (*it).first << ", " << (*it).second << endl;
    cout << se.size() << endl;
    return 0;
}