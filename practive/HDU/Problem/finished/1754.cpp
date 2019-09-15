#include <bits/stdc++.h>
using namespace std;
const int inf = 0x3f3f3f3f;
vector<int> tree;
int n, m;

void pushUP(int p) { tree[p] = max(tree[p << 1], tree[p << 1 | 1]); }

void build(int l, int r, int p)
{
    if (l == r)
    {
        scanf("%d", &tree[p]);
        return;
    }
    int m = (l + r) >> 1;
    build(l, m, p << 1);
    build(m + 1, r, p << 1 | 1);
    pushUP(p);
}

int query(int ql, int qr, int l, int r, int p)
{
    if (ql <= l && qr >= r)
        return tree[p];
    int m = (l + r) >> 1, ans = -inf;
    if (ql <= m)
        ans = max(ans, query(ql, qr, l, m, p << 1));
    if (qr > m)
        ans = max(ans, query(ql, qr, m + 1, r, p << 1 | 1));
    return ans;
}

void update(int a, int b, int l, int r, int p)
{
    if (l == r)
    {
        tree[p] = b;
        return;
    }
    int m = (l + r) / 2;
    if (a <= m)
        update(a, b, l, m, p << 1);
    else
        update(a, b, m + 1, r, p << 1 | 1);
    pushUP(p);
}

int main()
{
    while (~scanf("%d%d", &n, &m))
    {
        tree.resize(4 * n + 10);
        build(1, n, 1);
        while (m--)
        {
            char op;
            int a, b;
            scanf(" %c%d%d", &op, &a, &b);
            if (op == 'Q')
                printf("%d\n", query(a, b, 1, n, 1));
            else
                update(a, b, 1, n, 1);
        }
    }
    return 0;
}
