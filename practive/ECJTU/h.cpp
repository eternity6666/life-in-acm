#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> P;

int main()
{
    int n;
    cin >> n;
    int ans = 0;
    map<P, P> ma;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        if (a + b >= n)
            ans++;
        else
        {
            P tmp = ma[P(a, b)];
            ma[P(a, b)] = P(n - a - b, tmp.second + 1);
        }
    }
    map<P, P>::iterator it;
    for (it = ma.begin(); it != ma.end(); ++it)
    {
        P tmp = it->second;
        if (tmp.first < tmp.second)
            ans += tmp.second - tmp.first;
        else if (tmp.first > tmp.second)
            ans += min(tmp.second - tmp.first, tmp.first);
    }
    cout << ans << endl;
    return 0;
}