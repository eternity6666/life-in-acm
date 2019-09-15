/*
#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e6 + 10;

vector<int> tree(4 * maxn);
int n, m;

void pushUP(int id) { tree[id] = tree[id << 1] + tree[id << 1 | 1]; }
void pushDOWN()
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
    pushUP(id);
}

void update(int id, int l, int r, int ql, int qr)
{
    if(ql<=l&&qr>=r)
    {
        d[id] = (r-l+1)-d[id], b[id] += (r-l+1);
        return ;
    }
    int m = (l + r) >> 1;
    if(b[id] && l != r)
    {
        d[id<<1] = 
    }
}

int query(int id, int l, int r, int ql, int qr)
{

}

int solve()
{
    scanf("%d%d", &n, &m);
    build(1, 1, n);
    while (m--)
    {
        int l, r;
        scanf("%d%d", &l, &r);
        update(1, 1, n, l, r);
    }
    return query(1, 1, n, 1, n);
}

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; ++i)
        printf("Case #%d: %d\n", i, solve());
    return 0;
}
*/
