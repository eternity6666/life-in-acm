/*
#include <bits/stdc++.h>
using namespace std;

vector<int> tree;
int n, q;

void up(int id)
{
    tree[id] = tree[id << 1] + tree[id << 1 | 1];
}

void build(int id, int l, int r)
{
    if (l == r)
    {
        tree[id] = 1;
        return;
    }
    int m = (l + r) >> 1;
    build(id << 1, l, m);
    build(id << 1 | 1, m + 1, r);
    up(id);
}

void update(int id, int l, int r, int x, int v)
{
    if (l == r)
    {
        tree[id] = v;
        return;
    }
    int m = (l + r) >> 1;
    if (x <= m)
        update(id << 1, l, m, x, v);
    else
        update(id << 1 | 1, m + 1, r, x, v);
    up(id);
}

int query(int id, int l, int r, int ql, int qr)
{
    if (ql <= l && qr >= r)
        return tree[id];
    int m = (l + r) >> 1, ans = 0;
    if (ql <= m)
        ans += query(id << 1, l, m, ql, qr);
    if (qr > m)
        ans += query(id << 1 | 1, m + 1, r, ql, qr);
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    int t;
    cin >> t;
    for (int i = 1; i <= t; ++i)
    {
        cin >> n >> q;
        tree.resize(4 * n + 10);
        build(1, 1, n);
        while (q--)
        {
            int x, y, z;
            cin >> x >> y >> z;
            for (int i = x; i <= y; ++i)
            {
                update(1, 1, n, i, z);
            }
        }
        printf("Case %d: The total value of the hook is %d.\n", i, query(1, 1, n, 1, n));
    }

    return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5 + 10;

int lazy[maxn << 2];

void pushDOWN(int id)
{
    if (lazy[id])
    {
        lazy[id << 1] = lazy[id << 1 | 1] = lazy[id];
        lazy[id] = 0;
    }
}

void update(int id, int l, int r, int ul, int ur, int val)
{
    if (ul <= l && r <= ur)
    {
        lazy[id] = val;
        return;
    }
    int m = (l + r) >> 1;
    pushDOWN(id);
    if (ul <= m)
        update(id << 1, l, m, ul, ur, val);
    if (ur > m)
        update(id << 1 | 1, m + 1, r, ul, ur, val);
}

int query(int id, int l, int r, int ql, int qr)
{
    if (ql <= l && r <= qr && lazy[id] > 0)
        return lazy[id] * (r - l + 1);
    int m = (l + r) >> 1;
    int sum = 0;
    if (ql <= m)
        sum += query(id << 1, l, m, ql, qr);
    if (qr > m)
        sum += query(id << 1 | 1, m + 1, r, ql, qr);
    return sum;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    int n, q, t;
    cin >> t;
    for (int i = 1; i <= t; ++i)
    {
        cin >> n >> q;
        update(1, 1, n, 1, n, 1);
        while (q--)
        {
            int x, y, z;
            cin >> x >> y >> z;
            update(1, 1, n, x, y, z);
        }
        printf("Case %d: The total value of the hook is %d.\n", i, query(1, 1, n, 1, n));
    }
    return 0;
}
