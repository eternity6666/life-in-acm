#include <bits/stdc++.h>
using namespace std;
const int maxn = 2e5 + 10;

int nxt[maxn];
int t;
string s;

int main()
{
    for (cin >> t; t--;)
    {
        cin >> s;
        int len = s.size();
        for (int i = 0; i < len; ++i)
            if (s[i] == '1')
                nxt[i] = i;
            else
                nxt[i] = (i == 0 ? -1 : nxt[i - 1]);
        int res = 0;
        for (int r = 0; r < len; ++r)
        {
            int sum = 0;
            for (int l = r; l >= 0 && r - l < 20; --l)
            {
                if (s[l] == '0')
                    continue;
                sum += 1 << (r - l);
                if (sum <= r - (l == 0 ? -1 : nxt[l - 1]))
                    ++res;
            }
        }
        cout << res << endl;
    }
    return 0;
}
