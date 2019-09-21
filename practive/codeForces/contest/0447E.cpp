#include <bits/stdc++.h>
using namespace std;
const int maxn = 3e5 + 10;
const int mod = 1e9 + 9;

int f[maxn], n, m, tree[maxn<<2];
void pushUP(int rt){tree[rt]=tree[rt<<1]+tree[rt<<1|1];}
void build(int rt, int l, int r)
{
    if (l == r)
    {
        cin >> tree[rt];
        return ;
    }
    int m = (l+r)>>1;
    build(rt<<1, l,m);
    build(rt<<1|1,m+1,r);
}

void update(int rt, int l, int r, int ul, int ur, int v)
{

}

ll query(int rt, int l, int r, int ql, int qr)
{

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    cin >> n >> m;
    f[2] = f[1] = 1;
    for (int i = 3; i <= n; i++)
        f[i] = (f[i - 1] + f[i - 2])%mod;
    build(1, 1, n);

    return 0;
}
