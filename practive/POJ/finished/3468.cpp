// #include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
using namespace std;
const int maxn = 1e5 + 10;
#define lson id << 1, l, m
#define rson id << 1 | 1, m + 1, r
typedef long long ll;

ll tree[maxn << 2], lazy[maxn << 2];
void pushUP(int id) { tree[id] = tree[id << 1] + tree[id << 1 | 1]; }
void pushDOWN(int id, int m)
{
    if (lazy[id])
    {
        lazy[id << 1] += lazy[id];
        lazy[id << 1 | 1] += lazy[id];
        tree[id << 1] += (m - (m >> 1)) * lazy[id];
        tree[id << 1 | 1] += (m >> 1) * lazy[id];
        lazy[id] = 0;
    }
}
void build(int id, int l, int r)
{
    lazy[id] = 0;
    if (l == r)
    {
        scanf("%I64d", &tree[id]);
        return;
    }
    int m = (l + r) >> 1;
    build(lson), build(rson);
    pushUP(id);
}

void update(int id, int l, int r, int ul, int ur, ll uv)
{
    if (ul <= l && r <= ur)
    {
        tree[id] += uv * (r - l + 1), lazy[id] += uv;
        return;
    }
    pushDOWN(id, r - l + 1);
    int m = (l + r) >> 1;
    if (ul <= m) update(lson, ul, ur, uv);
    if (ur > m) update(rson, ul, ur, uv);
    pushUP(id);
}

ll query(int id, int l, int r, int ql, int qr)
{
    if (ql <= l && r <= qr)
        return tree[id];
    pushDOWN(id, r - l + 1);
    int m = (l + r) >> 1;
    ll sum = 0;
    if (ql <= m)
        sum += query(lson, ql, qr);
    if (qr > m)
        sum += query(rson, ql, qr);
    return sum;
}

int main()
{
    int n, q;
    scanf("%d%d", &n, &q);
    build(1, 1, n);
    while (q--)
    {
        char c[4];
        scanf("%s", &c);
        if (c[0] == 'C')
        {
            int ul, ur, uv;
            scanf("%d%d%d", &ul, &ur, &uv);
            update(1, 1, n, ul, ur, uv);
        }
        else
        {
            int ql, qr;
            scanf("%d%d", &ql, &qr);
            printf("%I64d\n", query(1, 1, n, ql, qr));
        }
    }
    return 0;
}
