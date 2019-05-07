#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
typedef long long ll;
using namespace std;
const int maxn = 2e6 + 5;
const long long INF = 0xffffff0;
int maxV = -INF;
int minV = INF;

inline int max(int a, int b) {return a > b ? a : b;}
inline int min(int a, int b) {return a < b ? a : b;}

struct node
{
    int l, r;
    int minV, maxV;
    int mid(){return (l + r) / 2;};
}tree[maxn*4];

void build(int root, int l, int r)
{
    tree[root].l = l;
    tree[root].r = r;
    tree[root].minV = INF;
    tree[root].maxV = -INF;
    if(l != r)
    {
        build(2 * root + 1, l, (l + r) / 2);
        build(2 * root + 2, (l + r) / 2 + 1, r);
    }
}

void insert(int root, int i, int v)
{
    if(tree[root].l == tree[root].r)
    {
        tree[root].minV = tree[root].maxV = v;
        return;
    }
    tree[root].minV = min(tree[root].minV, v);
    tree[root].maxV = max(tree[root].maxV, v);
    if( i <= tree[root].mid())
        insert(2 * root + 1, i, v);
    else
        insert(2 * root + 2, i, v);
}

void query(int root, int s, int e)
{
    if(tree[root].minV >= minV && tree[root].maxV <= maxV)
        return ;
    if(tree[root].l == s && tree[root].r == e)
    {
        minV = min(minV, tree[root].minV);
        maxV = max(maxV, tree[root].maxV);
        return;
    }
    if(e<=tree[root].mid())
        query(2 * root + 1, s, e);
    else if(s > tree[root].mid())
        query(2 * root + 2, s, e);
    else
    {
        query(2 * root + 1, s, tree[root].mid());
        query(2 * root + 2, tree[root].mid() + 1, e);
    }
}

int main()
{
    freopen("in.txt", "r", stdin);
    int n, q;
    scanf("%d %d", &n, &q);
    build(0, 1, n);
    fei(1, n)
    {
        int tmp;
        scanf("%d", &tmp);
        insert(0, i, tmp);
    }
    fei(1, q)
    {
        int tmp;
        scanf("%d", &tmp);
        int a, b;
        if(tmp)
        {
            scanf("%d %d", &a, &b);
            insert(0, a, b);
        }
        else
        {
            scanf("%d %d", &a, &b);
            minV = INF;
            maxV = -INF;
            query(0, a, b);
            printf("%d\n", (maxV + minV) / 2);
        }
    }
    return 0;
}

