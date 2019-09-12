#include <bits/stdc++.h>
using namespace std;
const int maxn = 5e4 + 10;

int n;
vector<int> tree;

void build(int l, int r, int p)
{
    if (l == r)
    {
        cin >> tree[p];
        return;
    }
    int m = (l + r) / 2;
    build(l, m, p * 2), build(m + 1, r, p * 2 + 1);
    tree[p] = tree[p * 2] + tree[p * 2 + 1];
}

void add(int id, int value, int l, int r, int p)
{
    if (l == r)
    {
        tree[p] += value;
        return;
    }
    int m = (l + r) / 2;
    if (id <= m)
        add(id, value, l, m, p * 2);
    else
        add(id, value, m + 1, r, p * 2 + 1);
    tree[p] = tree[p * 2] + tree[p * 2 + 1];
}

int query(int ql, int qr, int l, int r, int p)
{
    if (ql <= l && r <= qr)
        return tree[p];
    int m = (l + r) / 2;
    int ans = 0;
    if (ql <= m)
        ans += query(ql, qr, l, m, p * 2);
    if(qr>m)
        ans += query(ql, qr, m+1,r,p*2+1);
    return ans;
}

void answer()
{
    string s;
    while (cin >> s)
    {
        if (s == "End")
            return;
        int i, j;
        cin >> i >> j;
        if (s == "Add")
            add(i, j, 1, n, 1);
        else if (s == "Query")
            cout << query(i, j, 1, n, 1) << endl;
        else
            add(i, -j, 1, n, 1);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    int t;
    cin >> t;
    for (int i = 1; i <= t; ++i)
    {
        cout << "Case " << i << ":\n";
        cin >> n;
        tree.resize(n * 4 + 4);
        build(1, n, 1);
        answer();
    }
    return 0;
}