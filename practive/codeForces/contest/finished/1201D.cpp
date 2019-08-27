/*
#include <iostream>
#include <cstring>
#include <algorithm>
#include <queue>
using namespace std;
const int maxn = 2e5 + 10;

struct node
{
    int x, y, sum;
};
int n, m, k, q, l[maxn], r[maxn];
int v[maxn];

int findx(int x)
{
    if (v[x] != maxn)
        return v[x];
    int l, r;
    for (l = x; l > 0; l--)
        if (v[l] == 0)
            break;
    for (r = x; r <= m; r++)
        if (v[r] == 0)
            break;
    if (l == 0)
        return v[x] = r - x;
    if (r == m + 1)
        return v[x] = l - x;
    return v[x] = r - x < x - l ? r - x : x - l;
}

int main()
{
    cin >> n >> m >> k >> q;
    memset(l, maxn, sizeof(l));
    memset(r, -maxn, sizeof(r));
    while (k--)
    {
        int x, y;
        cin >> x >> y;
        l[x] = l[x] < y ? l[x] : y;
        r[x] = r[x] > y ? r[x] : y;
    }
    memset(v, maxn, sizeof(v));
    while (q--)
    {
        int x;
        cin >> x;
        v[x] = 0;
    }
    queue<P> q;
    node tmp;
    tmp.x = tmp.y = 1;
    tmp.sum = 0;
    while (!q.empty())
    {
        tmp = q.front();
        q.pop();
        if(tmp.x == n)
        {

            continue;
        }
        if(l[tmp.x]==maxn)
        {
            node tmp2;
            tmp2.x = tmp.x + 1;
        }
        else
        {
            
        }
    }
    return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 2e5 + 10;
const ll inf = 1e18;

int n, m, k, q;
int l[maxn], r[maxn], b[maxn];
ll dp[maxn][2];

void trans(ll &nxt, ll now, int pos, int first, int second)
{
    int idx = int(upper_bound(b + 1, b + q + 1, pos) - b);
    if (idx != q + 1)
    {
        ll tnow = now;
        int tpos = pos;
        tnow += abs(tpos - b[idx]);
        tpos = b[idx];
        ++tnow;
        tnow += abs(tpos - first);
        tnow += abs(first - second);
        nxt = min(nxt, tnow);
    }
    if (idx != 1)
    {
        --idx;
        ll tnow = now;
        int tpos = pos;
        tnow += abs(tpos - b[idx]);
        tpos = b[idx];
        ++tnow;
        tnow += abs(tpos - first);
        tnow += abs(first - second);
        nxt = min(nxt, tnow);
    }
}

void solve()
{
    for (int i = 0; i < maxn; ++i)
        dp[i][0] = dp[i][1] = inf;
    if (l[1] == -1)
    {
        dp[1][0] = dp[1][1] = 0;
        l[1] = r[1] = 1;
    }
    else
    {
        dp[1][1] = r[1] - 1;
        dp[1][0] = dp[1][1] + r[1] - l[1];
    }
    int top = n;
    while (l[top] == -1)
        top--;
    for (int i = 1; i < n; ++i)
        if (l[i + 1] == -1)
        {
            dp[i + 1][0] = dp[i][0] + 1;
            dp[i + 1][1] = dp[i][1] + 1;
            l[i + 1] = l[i];
            r[i + 1] = r[i];
        }
        else
        {
            trans(dp[i + 1][0], dp[i][0], l[i], r[i + 1], l[i + 1]);
            trans(dp[i + 1][0], dp[i][1], r[i], r[i + 1], l[i + 1]);
            trans(dp[i + 1][1], dp[i][0], l[i], l[i + 1], r[i + 1]);
            trans(dp[i + 1][1], dp[i][1], r[i], l[i + 1], r[i + 1]);
        }
    // for(int i = 1; i <= top; i++)
    //     cout << dp[i][0] << " " << dp[i][1] << endl;
    cout << min(dp[top][0], dp[top][1]) << endl;
}

int main()
{
    cin >> n >> m >> k >> q;
    memset(l, -1, sizeof(l));
    memset(r, -1, sizeof(r));
    for (int i = 0; i < k; ++i)
    {
        int x, y;
        cin >> x >> y;
        if (l[x] == -1)
            l[x] = r[x] = y;
        else
        {
            l[x] = min(l[x], y);
            r[x] = max(r[x], y);
        }
    }
    for (int i = 1; i <= q; ++i)
        cin >> b[i];
    sort(b + 1, b + q + 1);
    solve();
    return 0;
}
